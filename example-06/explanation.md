Example 06 – Process Management: Creating Two Children with waitpid()

Purpose

To demonstrate the creation of multiple child processes by sequential fork() calls within the parent's execution path. It specifically uses the waitpid() system call to wait for the termination of a specific child process (p) before the parent completes its execution.

System Calls / Functions Used

fork(): Creates Child 1 (p) and Child 2 (q).

waitpid(): Blocks the calling process (parent) until a child process specified by PID (p) terminates.

getpid() / getppid(): Retrieves process IDs.

How It Works

The parent process forks Child 1. Then, within the parent's branch, it forks Child 2. The innermost else block is executed only by the parent. Here, the parent explicitly calls waitpid(p, NULL, 0). This guarantees that Child 1 will terminate before the parent prints its summary. Since there is no wait() or waitpid() for Child 2, it might become a zombie for a short period until the parent exits (or its cleanup is handled by the system).