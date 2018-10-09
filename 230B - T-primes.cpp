#include<bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    int n1=sqrt(n);
    for(int i=3;i<=n1;i+=2)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    int t;
    long long n;
    long long num;
    bool t1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%I64d",&num);
        if(num==4) printf("YES\n");
        else if(num==1) printf("NO\n");
        else if(num%2!=0){
            n=sqrt(num);
            if(n*n==num){
                t1=prime(n);
                if(t1) printf("YES\n");
                else printf("NO\n");
            }
            else printf("NO\n");
        }
        else printf("NO\n");
    }
    return 0;
}
