#include<bits/stdc++.h>
using namespace std;

int prime(int a,int b)
{
    int i,s=1;
    for(i=2;i<=b;i++)
    {
        if(a%i==0)
        {
            s=0;
            break;
        }
    }
    return s;
}
int main()
{
    int n,n1,t,c,c1,sum;
    while(scanf("%d",&n)==1)
    {
        sum=0;
        n1=n;
        t=sqrt(n);
        c=prime(n,t);
        if(c)
        {
            while(n)
            {
                sum+=n%10;
                sum*=10;
                n/=10;
            }
            sum/=10;
            if(sum==n1)
                printf("%d is prime.\n",n1);
            else
            {
                t=sqrt(sum);
                c1=prime(sum,t);
                if(c1)
                    printf("%d is emirp.\n",n1);
                else printf("%d is prime.\n",n1);
            }
        }
        else printf("%d is not prime.\n",n1);
    }
    return 0;
}
