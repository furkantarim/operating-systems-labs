Example 05 – Process Management: Simple fork() Example

Purpose

To demonstrate the creation of a new process (child) using the fork() system call, and to show how to use the return value of fork() to execute separate logic in the parent and child processes.

System Calls / Functions Used

fork(): Creates a new process (child). Returns 0 to the child and the child's PID to the parent.

getpid(): Returns the process ID (PID) of the calling process.

getppid(): Returns the parent process ID (PPID) of the calling process.

How It Works

The program prints "before fork" once. When fork() is called, the execution stream is split into two:

Child Process (q == 0): Enters the if block, prints its PID and its parent's PID.

Parent Process (q > 0): Enters the else block, prints its child's PID and its own PID. Both processes then continue execution after the if/else block and print "Common". The execution order is non-deterministic.