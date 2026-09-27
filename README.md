# cgltf - glTF 2.0 loader and writer C library

This is a `build2` package repository for [`cgltf`](https://github.com/jkuhlmann/cgltf),
the single-file/stb-style C glTF loader and writer.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`cgltf` in your `build2`-based project, then instead see the accompanying
[`PACKAGE-README.md`](libcgltf/PACKAGE-README.md) file.

The development setup for `cgltf` uses the standard `bdep`-based workflow.
For example:

```
git clone --recurse-submodules https://github.com/build2-packaging/cgltf.git
cd cgltf

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
