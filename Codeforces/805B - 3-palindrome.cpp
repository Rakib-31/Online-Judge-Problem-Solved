#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    int n,i,p=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(p<=2)
            printf("a");
        else
            printf("b");
        if(p==4)
            p=0;
        p++;
    }
    return 0;
}
