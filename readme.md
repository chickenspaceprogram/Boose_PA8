# PA 8

Each function is separated out into its own file so that I can use CTest and a series of unit tests to ensure my code works. If I used a more advanced testing program, this would be unnecessary, but I don't have the time to learn that before this assignment is due.

## *nix instructions

To test this code, do the following:

- `cd` into the `test` directory 
- enter the command `cmake .`
- enter the command `cmake --build .`
- enter the command `ctest`

This assumes that you have CMake installed.

## Windows instructions

- Open the `test` directory in Windows Terminal
- Enter the command `cmake .`
- Enter the command `cmake --build .`
- Enter the command `ctest -C Debug`

This assumes you have CMake and Visual Studio installed.