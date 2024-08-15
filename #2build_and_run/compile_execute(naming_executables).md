## Compile and Execute (Naming Executables)

### Compile

Sometimes, you may want to give the output executable file a specific name rather than using the default name `a.out`. To do this, you modify the compile command slightly.

1. Open the terminal.
2. Type `g++`, followed by the name of your source file. Then use `-o` to specify the desired name for the executable file. For example:
```bash
   g++ hello.cpp -o hello
```
   This command tells the compiler to translate the C++ program `hello.cpp` and create a machine code file named `hello` instead of the default `a.out`.

### Execute

To execute the newly named machine code file:

1. In the terminal, type `./` followed by the name of the executable file. For example:

```bash
   ./hello
```
   This command tells the terminal to run the executable file `hello`. The executable file is loaded into the computer's memory, and the CPU (Central Processing Unit) executes the program one instruction at a time.

By following these steps, you can compile your C++ program with a custom executable name and run it as needed.
