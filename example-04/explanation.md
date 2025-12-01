Example 04 – File I/O: Using dup2() for File Descriptor Duplication

Purpose

This application demonstrates the dup2() system call, which allows a programmer to duplicate an existing file descriptor (fd) onto a specific new descriptor number (e.g., 7), closing the target descriptor if it was already open.

System Calls / Functions Used

open(): Opens the file for reading.

dup2(): Duplicates the file descriptor.

printf(): Standard library function for output.

How It Works

The program first uses open() to open a file named "dup" and gets a file descriptor, typically 3 or greater, which is printed. It then calls dup2(fd, 7). This makes file descriptor 7 point to the same open file description as fd. The return value, fd1, will be 7. Both fd and fd1 can now be used interchangeably to refer to the file.