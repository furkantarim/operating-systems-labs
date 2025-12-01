#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
    int n, f, f1;
    char buff[20];
    f = open("seeking", O_RDWR);
    f1 = lseek(f, -11, SEEK_END);
    read(f, buff, 10);
    write(1, buff, 10);
}