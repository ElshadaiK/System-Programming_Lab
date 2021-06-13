#include <unistd.h>
#include <sys/wait.h>
#include<sys/types.h>
#include <stdio.h>
#include <stdlib.h>
void main () {
    pid_t pid;
    pid = fork ();
    if (pid == 0) {
        /* code executed in child */
        printf ("I am child PID %d\n", getpid ());
    }
    else {
        wait(NULL);
        printf ("I am parent PID %d\n", getpid());
    }
    exit(0);
}