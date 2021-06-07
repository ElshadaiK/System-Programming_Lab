#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
void main(){
    printf("this is the process id %d\n",getpid());
    printf("this is the process id %d\n",getppid());
}