Example 07 – Process Management: Orphan Process Demonstration

Purpose

This program demonstrates the concept of an Orphan Process. By having the parent process terminate (due to a short sleep(2)) before the child process (due to a long sleep(10)), the child becomes orphaned.

System Calls / Functions Used

fork(): Creates the child process.

sleep(): Suspends execution for a specified duration.

getpid() / getppid(): Retrieves process IDs.

How It Works

The parent process sleeps for 2 seconds and exits. The child process sleeps for 10 seconds. Since the parent does not call wait(), and it terminates first, the child is adopted by the init process (or systemd, typically PID 1). When the child finally wakes up and prints its information, its new Parent Process ID (getppid()) will likely be 1, confirming it is an orphan.