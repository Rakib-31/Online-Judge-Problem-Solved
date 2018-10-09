#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,p,n1;
    scanf("%d%d",&m,&p);
    n=sqrt(m);
    n1=n*(4+(n-1)*2);
    n1=n1/2;
    if(n1>p)
        printf("Valera\n");
    else
        printf("Vladik\n");
    return 0;
}
