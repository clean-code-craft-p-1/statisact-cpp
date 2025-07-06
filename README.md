# Compute Statistics

Here we compute statistics for a bunch of numbers.

This project uses the
[gtest framework](http://google.github.io/googletest/reference/assertions.html)
to test functionality.

## Pass the tests

The code is not complete and doesn't even compile.
See the results of compilation and execution in the GitHub 'Actions' tab.

Recognize the intention of the code by reading the tests.
Design the return type in the code.
You may alter the test while keeping its intent.

Take care not to leave behind any compiler warnings in your solution.

## Discussion

What's `epsilon` doing in the test? If you had to choose its value, what would it be?

## Tips to run locally on Windows

- Open the folder in Visual Studio and create project / solution
- To build on the command-line, install cmake using https://cmake.org/download/
- If cmake is still not found, you will need to restart all instances of the IDE / terminals
- Refer to the main-workflow.yml in your repo for the cmake commands to prepare and build.
- You may need to change the build command to `cmake -G "MinGW Makefiles" -S . -B build`
