## Compile and Execute

### Compile

A computer can only understand machine code. A compiler translates the C++ programs we write into machine code. You interact with the compiler through the terminal (the black panel to the right of the code editor that contains a dollar sign `$`).

To compile a C++ file, follow these steps:

1. Open the terminal.
2. Type `g++` followed by the name of your source file. For example:
   
```bash
   g++ hello.cpp
```

   This command tells the compiler to translate the C++ program `hello.cpp` into machine code. By default, the compiler generates a machine code file named `a.out`.

### Execute

Once you have compiled your program, you need to execute the generated machine code file. To do this:

1. In the terminal, type `./` followed by the machine code file name. For example:

```bash   
    ./a.out
```
   This command tells the terminal to run the executable file `a.out`. The executable file is loaded into the computer's memory, and the CPU (Central Processing Unit) executes the program one instruction at a time.

By following these steps, you can compile and run your C++ programs effectively.
