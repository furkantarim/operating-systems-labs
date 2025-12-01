#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
    int n;
    int fd;
    int fd1;
    char buf[50];

    n = read(0, buf, 20);

    fd1 = open("target.txt", O_WRONLY | O_APPEND | O_CREAT, 0644);

    write(fd1, buf, n);

    close(fd1);

    return 0;

}