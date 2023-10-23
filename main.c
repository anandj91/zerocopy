#include <stdio.h>
#include <unistd.h>

#include "zerocopylib.h"

int parent_process(int writefd)
{
    char* data = "test";
    zwrite(writefd, data, 5);
    return 0;
}

int child_process(int readfd)
{
    char* data;
    zread(readfd, data, 5);
    return 0;
}

int main()
{
    int pipefd[2];

    if (zpipe(pipefd) == -1) {
        perror("Failed to create zpipe.");
        return 1;
    }

	pid_t cpid = fork();
	if (cpid == -1) {
		perror("Failed to fork the process.");
        return 1;
	}

    if (cpid == 0) {
        return parent_process(pipefd[1]);
    } else {
        sleep(2);
        return child_process(pipefd[0]);
    }
}
