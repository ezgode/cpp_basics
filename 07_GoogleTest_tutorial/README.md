# How to run 
The info is coming from [here](https://google.github.io/googletest/quickstart-cmake.html). 

To make the test run, you gotta do:

```
cd project-path
cmake -S . -B build
cmake --build build
cd build && ctest
```