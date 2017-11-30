#include<bits/stdc++.h>
using namespace std;

long long digit_sum(int m)
{
    int k,p,add=1,v;
    long long l=10,t=1,sum=0;
    v=m%10;
    k=m;
    while(k)
    {
        k=m;
        k/=l;
        p=m%l;
        sum+=v*add+t*(v*(v-1))/2+k*t*45;
        v=k%10;
        add=p+1;
        l*=10;
        t*=10;
    }
    return sum;
}

int main()
{
    int m,n,i,j;
    long long k,l,sum;
    while(1)
    {
        scanf("%d%d",&m,&n);
        if(!m && !n) break;
        k=digit_sum(n);
        l=digit_sum(m-1);
        sum=k-l;
        printf("%lld\n",sum);
    }

return 0;
}

