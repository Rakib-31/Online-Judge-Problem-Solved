#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,k,a[100],sum=0,sum1=0,sum2=0,seat,num,p,p1,need2,need4;
    scanf("%d%d",&n,&k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
        p=a[i]/4;
        sum+=p;
        p1=a[i]%4;
        if(p1==2) sum1++;
        else if(p1==1) sum2++;
        else if(p1==3){
            sum2++;
            sum1++;
        }
    }
    need4=n-sum;
    if(need4>0)
        need2=3*need4+2*(n-need4);
    else if(need4<0)
        need2=2*(n+need4);
    else need2=2*n;
    if(need2<sum1){
        sum2+=2*(sum1-need2);
        seat=8*n-4*sum-2*need2;
    }
    else
        seat=8*n-4*sum-2*sum1;
        if(seat>=2*sum2) printf("YES\n");
        else printf("NO\n");


    return 0;
}
