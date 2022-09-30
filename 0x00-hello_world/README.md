The compilation process in C involves four steps: pre-processing, compiling, assembling, and linking then, we run the obtained executable file to get an output on the screen.

1. The **preprocessor** tool helps in comments removal, macros expansion, file inclusion, and conditional compilation. These commands are executed in the first step of the compilation process.
   - [0-preprocessor](0-preprocessor) script runs a C file through the preprocessor and save the result into another file
2. **Compiler** software helps boost the program's performance and translates the intermediate file (**.i**) to an assembly file (**.s**).
   - [1-compiler](1-compiler) script compiles a C file but does not link
3. **Assembler** helps convert the assembly file into an object file (**.o/.obj**) containing machine-level code.
   - [2-assembler](2-assembler) script generates the assembly code of a C code and save it in an output file
4. **Linker** is used for linking the library file with the object file. It is the final step in compilation to generate an executable file (**.out/.exe**)
   - [3-name](3-name) script compiles a C file and creates an executable named cisfun
