# File Input/Output

## File Descriptors
A file descriptor is a number that uniquely identifies an open file in a computer's operating system. It describes a data resource, and how that resource may be accessed.

When a program asks to open a file — or another data resource, like a network socket — the kernel:
1. Grants access
2. Creates an entry in the global file table
3. Provides the software with the location of that entry

The descriptor is identified by a unique non-negative integer, such as 0, 12, or 567. At least one file descriptor exists for every open file on the system.

File descriptors were first used in Unix, and are used by modern operating systems including Linux, macOS, and BSD. In Microsoft Windows, file descriptors are known as file handles.

The value of the first file descriptor you will get after opening a new file with `open` is (3) because most of the time, you will already have `stdin` (value 0), `stdout` (value 1) and `stderr` (value 2) opened when your program starts executing.

## File Handling in C
C provides a number of build-in functions to perform basic file operations:

`fopen()` - create a new file or open a existing file
`fclose()` - close a file
`getc()` - reads a character from a file
`putc()` - writes a character to a file
`fscanf()` - reads a set of data from a file
`fprintf()` - writes a set of data to a file
`getw()` - reads a integer from a file
`putw()` - writes a integer to a file
`fseek()` - set the position to desire point
`ftell()` - gives current position in the file
`rewind()` - set the position to the beginning point
