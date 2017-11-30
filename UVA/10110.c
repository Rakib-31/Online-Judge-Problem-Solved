#include<stdio.h>
int main()
{
    long long i,j,n,m,count;
    while(1)
    {
          scanf("%lld",&n);
          if(n==0) break;
          count=2;
          m=sqrt(n);
          for(i=2;i<=m;i++)
          {
              if(n%i==0)
              {
                  if(i==m){
                     j=n/i;
                     if(i==j) count++;
                  }
                  else count+=2;
              }
          }
          if(count%2==0) printf("no\n");
          else printf("yes\n");
    }
    return 0;
}

