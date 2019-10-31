# Weasel

## Develpoing the project

### Building
Cmake is required to build the project.

To start, create a build directory and initialize CMake in it:
```bash
mkdir -p build
cd build
cmake ..
```

After it finishes, you can compile the whole project with:
```
make
```

If you just want to compile the test executabe, run:
```
make test_main
```

And you can build the main executable with:
```
make main
```

The built executables will be `build\test\test_main` and `build\src\main` respectively.

If you make changes to the code you only need to rerun the according make command. Rerun the `cmake ..` command only if you have made changes to a `CMakeLists.txt` file.

## License 
![GNU GENERAL PUBLIC LICENSE](https://www.gnu.org/graphics/gplv3-127x51.png)
