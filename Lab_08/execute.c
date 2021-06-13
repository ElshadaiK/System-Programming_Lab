#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
// void main () {
//     char *newargs[4];
//     pid_t childpid;
//     newargs[0] = "/bin/ls";
//     newargs[1] = "-l";
//     newargs[2] = "/bin";
//     newargs[3] = NULL; /* Indicate end of args array */
    
//     childpid = fork ();
//     if (childpid == 0) 
//     {
//         /* child code */
//         execv("/bin/ls", newargs);
//     }
//     else
//     {
//         /* parent code */
//         wait(NULL); /*wait*/
        
//     }
// }
void main () {
    char *newargs[4];
    pid_t childpid;
    newargs[0] = "/bin/mkdir";
    newargs[1] = "abc";
    newargs[2] = NULL;
    
    childpid = fork ();
    if (childpid == 0) 
    {
        /* child code */
        execv("/bin/mkdir", newargs);
    }
    else
    {
        /* parent code */
        wait(NULL); /*wait*/
        
    }
}