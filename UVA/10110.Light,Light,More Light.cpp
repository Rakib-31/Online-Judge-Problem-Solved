#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n,count,fact;
    while(1)
    {
          scanf("%lld",&n);
          if(n==0) break;
          i=sqrt(n);
          if(i*i==n || (i+1)*(i+1)==n)
              printf("yes\n");
          else printf("no\n");
    }
    return 0;
}
