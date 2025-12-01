Example 03 – File I/O: Using lseek() for File Pointer Manipulation

Purpose

This program illustrates how to use the lseek() system call to explicitly change the read/write file pointer position within a file, specifically demonstrating how to read a fixed number of bytes from the end of a file.

System Calls / Functions Used

open(): Opens the file for reading and writing (O_RDWR).

lseek(): Changes the file pointer position.

read(): Reads data from the file.

write(): Writes the read data to Standard Output (file descriptor 1).

How It Works

The program first opens a file named "seeking". It then calls lseek(f, -11, SEEK_END) to move the file pointer 11 bytes before the current end of the file. This new position serves as the starting point for the subsequent read() call. The program then reads 10 bytes from this position and prints the result to the console, effectively displaying the last 10 characters of the file.