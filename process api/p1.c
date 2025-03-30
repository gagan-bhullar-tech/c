#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
    printf("hello (pid: %d)\n", getpid());
    int rc = fork();
    if (rc < 0) {
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0) {
        // child process
        printf("hello, I am child (pid: %d)\n", getpid());
    } else {
        // parent process
        wait(NULL); // wait for child process to finish
        printf("hello, I am parent of %d (pid: %d)\n", rc, getpid());
    }
}