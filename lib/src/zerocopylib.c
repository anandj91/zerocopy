#include <stdio.h>

#include "zerocopylib.h"

int zpipe(int pipefd[2])
{
    pipefd[0] = 1;
    pipefd[1] = 2;
    return 0;
}

int zwrite(int fd, char* data, int size)
{
    printf("Writing to %d\n", fd);
    return 0;
}

int zread(int fd, char* data, int size)
{
    printf("Reading from %d\n", fd);
    return 0;
}
