Example 08 – Process Management: Using wait() to Prevent Zombie Processes

Purpose

This program demonstrates the use of the wait() system call to synchronize the parent and child processes. The primary goal is to ensure the parent waits for the child's termination, allowing the operating system to clean up the child's resources and preventing the child from entering a zombie state.

System Calls / Functions Used

fork(): Creates the child process.

wait(): Blocks the calling process (parent) until one of its child processes terminates.

sleep(): Suspends execution for a specified duration.

getpid() / getppid(): Retrieves process IDs.

How It Works

The child process executes quickly and terminates. The parent process is blocked by the wait(NULL) call until the child terminates. Once the child's termination status is reported, wait() returns, and the parent is unblocked. This guarantees that no zombie process is created. The parent then sleeps for 3 seconds and prints its information.