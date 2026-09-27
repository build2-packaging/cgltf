# libcgltf - glTF 2.0 loader and writer C library

This is a `build2` package for the [`cgltf`](https://github.com/jkuhlmann/cgltf)
C library. It provides a single-file/stb-style C glTF loader and writer.

The package builds the library in the compiled mode: the implementations of
both `cgltf.h` and `cgltf_write.h` are part of the library, so consumers must
not define `CGLTF_IMPLEMENTATION` or `CGLTF_WRITE_IMPLEMENTATION`.


## Usage

To start using `libcgltf` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libcgltf ^1.15.0
```

Then import the library in your `buildfile`:

```
import libs = libcgltf%lib{cgltf}
```


## Importable targets

This package provides the following importable targets:

```
lib{cgltf}
```

The glTF loader (`<cgltf.h>`) and writer (`<cgltf_write.h>`).


## Configuration variables

This package provides no configuration variables.
