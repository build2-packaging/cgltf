#include <string.h>

#include <cgltf.h>
#include <cgltf_write.h>

#undef NDEBUG
#include <assert.h>

int main (void)
{
  /* Parse and validate a minimal glTF 2.0 document from memory.
   */
  const char json[] = "{\"asset\":{\"version\":\"2.0\"}}";

  cgltf_options o;
  memset (&o, 0, sizeof (o));

  cgltf_data* d = NULL;
  assert (cgltf_parse (&o, json, sizeof (json) - 1, &d) ==
          cgltf_result_success);
  assert (d != NULL);
  assert (d->asset.version != NULL && strcmp (d->asset.version, "2.0") == 0);
  assert (cgltf_validate (d) == cgltf_result_success);

  /* Write it back.
   */
  char b[256];
  cgltf_size n = cgltf_write (&o, b, sizeof (b), d);
  assert (n > 0 && n <= sizeof (b));
  assert (strstr (b, "\"version\"") != NULL && strstr (b, "\"2.0\"") != NULL);

  cgltf_free (d);
  return 0;
}
