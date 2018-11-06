#include<stdio.h>
#include<unistd.h>

int main(){

    //pstree command after run it

    pid_t pid,cpid,ppid;

    pid = getpid();
    cpid = fork();

    if(cpid == 0){
        printf("child: %d\n",pid);
        pid = getpid();
        printf("child: %d\n",pid);
        int i;
        for(i = 0; i < 10000; i++)
            printf("child: %d\n",i);
    }

    if(cpid > 0){
        printf("parent: %d\n",pid);
        pid = getpid();
        int i;
        printf("child: %d\n",pid);
        for(i = 0; i < 100; i++)
            printf("parent: %d\n",i);
    }

return 0;
}



