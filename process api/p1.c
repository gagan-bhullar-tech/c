#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

int main(int argc, char *argv[]) {
    printf("hello (pid: %d)\n", getpid());
    int rc = fork();
    if (rc < 0) {
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0) {
        // child process
        printf("hello, I am child (pid: %d)\n", getpid());
        char *myargs[3];
        myargs[0] = strdup("wc");
        myargs[1] = strdup("p1.c");
        myargs[2] = NULL;
        execvp(myargs[0], myargs);
        printf("exec failed\n"); // this line will not be executed if execvp is successful
    } else {
        // parent process
        wait(NULL); // wait for child process to finish
        printf("hello, I am parent of %d (pid: %d)\n", rc, getpid());
    }
}