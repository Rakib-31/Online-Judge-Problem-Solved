#include<bits/stdc++.h>
using namespace std;

int mark[10000000],prime[664580];

void sieve(){

    mark[1]=1;
    int k=0,limit=sqrt(10000000);

    for(int i=4;i<10000000;i+=2)
        mark[i]=1;

    prime[0]=2;

    for(int i=3;i<10000000;i+=2)
    {
        if(!mark[i])
        {
            k++;
            prime[k]=i;
            if(i<=limit)
            {
                for(int j=i*i;j<10000000;j+=2*i)
                    mark[j]=1;
            }
        }
    }
}

int main()
{
    sieve();
    long long n,m;
    int i,count;

    while(1)
    {
        scanf("%lld",&n);
        if(n==1) break;
        count=0;
        m=sqrt(n+1);
        for(i=0;prime[i]<=m;i++)
        {
            while(n%prime[i]==0)
            {
                count++;
                n/=prime[i];
            }
            if(n==1) break;
        }
        if(n>1) count++;
        printf("%d\n",count);
    }
    return 0;
}

