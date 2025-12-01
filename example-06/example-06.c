#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <sys/wait.h>

int main()
{
    pid_t p, q;
    printf("before fork\n");
    p = fork();

    if (p == 0) //child1
    {
        printf("I am first child having Pid %d\n", getpid());
        printf("My parent's Pid is %d\n", getppid());
    }
    else //parent
    {
        q = fork();
        if (q == 0) //child2
        {
            printf("I am second child having PID %d\n", getpid());
            printf("Second child's parent PID is %d\n", getppid());
        }
        else
        {
            //wait(NULL);
            waitpid(p, NULL, 0);
            printf("I am parent having id %d\n", getpid());
            printf("My First child's PID is %d\n", p);
            printf("My Second child's PID is %d\n", q);
        }
    }
}