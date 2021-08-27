# Instructions

Here we just modified the CMakeLists.txt file so that the library can be installed. To do so, we just need to go to the build directory, and pass the `install` flag to the `make` command. This should place the header files and the source files in `/usr/local/include` and `/usr/local/lib`.

```shell
mkdir build
cd build
cmake ..
make install
```

