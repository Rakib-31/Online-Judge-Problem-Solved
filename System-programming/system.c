#include<stdio.h>
#include<unistd.h>

int main(){

    pid_t pid,cpid,ppid;

    pid = getpid();
    cpid = fork();

    if(cpid == 0){
        printf("child: %d",pid);
        pid = getpid();
        printf("child: %d",pid);
    }

    else if(cpid > 0){
        printf("parent: %d",pid);
        pid = getpid();
        printf("child: %d",pid);
    }

return 0;
}

