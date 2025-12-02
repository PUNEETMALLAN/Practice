#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(){
pid_t child_pid=fork();
if(child_pid<0){
    perror("fork faild");
}
if(child_pid==0){
    char *arg[]={"ls","-l",NULL};

    execvp("ls",arg);
    perror("Exec failed");
    exit(1);
}
else{
    int status;
    wait(&status);
    if(WIFEXITED(status)){
        printf("Child process exited with the status:%d",WEXITSTATUS(status));
    }
    else{
        perror("child process didn't exited normaly");  
    }
}
return 0;
}