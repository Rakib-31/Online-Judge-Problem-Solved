#include <iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    long long tprime,p;
    int c,i,j;
    scanf("%d",&j);
    while(j--)
    {
        c=1;
        scanf("%lld",&tprime);
        if(tprime==1)
            printf("NO\n");
        else if(tprime%2==0 && tprime>4)
            printf("NO\n");
        else
        {
            p=sqrt(tprime);
             if(tprime==p*p) {
                    p=sqrt(p);
                for(i=3;i<=p;i=i+2)
                {
                    if(tprime%i==0){
                        printf("NO\n");
                        c=0;
                        break;
                    }
                }
                if(c)
                    printf("YES\n");
            }
            else
                  printf("NO\n");
        }
    }
    return 0;
}
