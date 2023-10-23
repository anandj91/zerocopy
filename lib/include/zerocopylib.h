// pipefd[0] and pipefd[1] are the the read and write ends resp.
// returns 0 if successful
int zpipe(int pipefd[2]);
int zwrite(int fd, char* data, int size);
int zread(int fd, char* data, int size);
