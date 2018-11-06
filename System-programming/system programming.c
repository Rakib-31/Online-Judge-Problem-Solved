#include<stdio.h>
#include<unistd.h>

int main(){

    pid_t pid,cpid,ppid;

    pid = getpid();
    cpid = fork();

    if(cpid == 0){
        printf("child: %ld",pid);
        pid = getpid();
        printf("child: %ld",pid);
    }

    if(cpid > 0){
        printf("parent: %ld",pid);
        pid = getpid();
        printf("child: %ld",pid);
    }

return 0;
}
