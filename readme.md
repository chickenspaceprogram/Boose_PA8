# PA 8 v1.0

Each function is separated out into its own file so that I can use CTest and a series of unit tests to ensure my code works. If I used a more advanced testing program, this would be unnecessary, but I don't have the time to learn that before this assignment is due.

If you were not provided with the source code for this project, you can find it [here](https://github.com/chickenspaceprogram/Boose_PA8.git).

## *nix instructions

To test this code, do the following:

- `cd` into the `test` directory using a terminal
- enter the command `cmake .`
- enter the command `cmake --build .`
- enter the command `ctest`

This assumes that you have CMake installed. If you do not have CMake installed, install it from https://cmake.org/download/ or use your preferred package manager.

## Windows instructions

- Open the `test` directory in Windows Terminal
- Enter the command `cmake .`
- Enter the command `cmake --build .`
- Enter the command `ctest -C Debug`

This assumes you have CMake and Visual Studio installed.
