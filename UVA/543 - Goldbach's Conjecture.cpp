#include<bits/stdc++.h>
using namespace std;

bool prime(int a, int b)
{
    bool q=true;
    for(int i=3;i<=a;i=i+2)
    {
        if(b%i==0)
        {
            q=false;
            break;
        }
    }
    return q;
}

bool decision(int m, int i)
{
    bool p,p1;
    int m1=sqrt(m+1);
    int i1=sqrt(i+1);
    p=prime(m1,m);
    p1=prime(i1,i);
    if(p && p1)
        return p;
    else return p=false;
}

int main()
{
    int i,n,a,b,m;
    bool t;
    while(1)
    {
        scanf("%d",&n);
        if(!n)
            break;
        m=n-1;
        for(i=3;i<=m; )
        {
            if(m+i==n){
                t=decision(m,i);
                if(t)
                    break;
                else
                {
                    m-=2;
                    i+=2;
                }
            }
            else if(m+i>n)
            {
                m-=2;
            }
            else i+=2;
        }
        if(t)
            printf("%d = %d + %d\n",n,i,m);
        else printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
