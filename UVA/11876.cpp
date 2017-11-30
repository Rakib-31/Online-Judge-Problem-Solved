#include<bits/stdc++.h>
using namespace std;

int mark[1000001];

void sieve(){

    mark[1]=1;
    int limit=sqrt(1000001);

    for(int i=4;i<1000001;i+=2)
        mark[i]=1;

    for(int i=3;i<1000001;i+=2)
    {
        if(!mark[i] && i<=limit)
        {
            for(int j=i*i;j<1000001;j+=2*i)
                mark[j]=1;
        }
    }
}

int main()
{
    sieve();
    int i,n,a,b,m;
    bool t=false;
    while(1)
    {
        scanf("%d",&n);
        if(!n)
            break;
        m=n-1;
        for(i=3;i<=m; )
        {
            if(m+i==n){
                if(!mark[i] && !mark[m]){
                    t=true;
                    break;
                }
                else{
                    m-=2;
                    i+=2;
                }
            }
            else if(m+i>n) m-=2;
            else i+=2;
        }
        if(t) printf("%d = %d + %d\n",n,i,m);
        else printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
