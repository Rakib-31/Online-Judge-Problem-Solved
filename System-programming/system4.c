#include<stdio.h>
#include<unistd.h>

int main(){

    printf("Hello\n");
    //code after execl cannot be printed
    execl("program path","program name",NULL);
    printf("Bye\n");

    return 0;
}
