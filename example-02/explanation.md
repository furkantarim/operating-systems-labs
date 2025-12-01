Example 02 – File I/O: Read from Stdin and Write/Append to File

Purpose

This application demonstrates basic file input/output operations by reading a specified number of bytes from Standard Input (stdin) and then writing/appending that content to a user-defined file (target.txt).

System Calls / Functions Used

read(): Reads data from a file descriptor (here, file descriptor 0 for stdin).

open(): Opens a file, creating it if it doesn't exist (O_CREAT) and setting the file pointer to the end for appending (O_APPEND).

write(): Writes the buffered data to the opened file.

close(): Closes the file descriptor.

How It Works

The program reads up to 20 characters from the terminal (Standard Input) and stores them in buf. It then uses open() to ensure target.txt exists and is opened in append mode. Finally, it uses write() to append the content stored in buf to the file.