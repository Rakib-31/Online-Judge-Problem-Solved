#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,p,t,q,cost=0;
    scanf("%d",&n);
    p=n+1;
    q=n-1;
    i=1;
    t=0;
    while(q--){
        j=p-i;
        if(j>t && (i+j)%p==0)
        {
            cost+=0;
        }
        else if(j<=t)
        {
            j++;
            cost+=(i+j)%p;
        }
         if(i<j)
            t=i;
         else t=j;
         i=j;
    }
    printf("%d\n",cost);
    return 0;
}
