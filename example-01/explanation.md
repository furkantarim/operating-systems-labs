Example 01 – File I/O: Using write() System Call

Purpose

The main purpose of this application is to demonstrate the use of the write() system call to output data to the standard output stream (terminal). It also captures and prints the return value of write(), which represents the number of bytes written.

System Calls / Functions Used

write(): System call to write data from a buffer to a file descriptor.

printf(): Standard library function to print formatted output.

How It Works

The program calls write(1, "Hello\n", 6). The first argument, 1, is the file descriptor for Standard Output. The second argument is the string buffer, and the third is the number of bytes to write (6, including the newline character \n). The return value (number of bytes written) is stored in the integer n. Finally, printf() is used to display the value of n.