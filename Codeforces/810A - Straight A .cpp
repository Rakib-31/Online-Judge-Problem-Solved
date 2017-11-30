#include<bits/stdc++.h>
using namespace std;
int main()
{
    double k,k1,k2,a[100],sum=0,sum1;
    int i,n,n1;
    scanf("%d%lf",&n,&k);
    k1=k-0.5;
    k2=k+0.5;
    for(i=0;i<n;i++){
        scanf("%lf",&a[i]);
        sum+=a[i];
    }
    sum1=sum/n;
    if(sum1>=k1 && sum1<k2)
        printf("0\n");
    else{
        n1=n;
        for( ; ; ){
            sum+=k;
            n++;
            sum1=sum/n;
            if(sum1>=k1 && sum1<k2)
            {
                n=n-n1;
                printf("%d\n",n);
                break;
            }
            else if(sum1>=k2)
            {
                n=n-n1;
                printf("%d\n",n);
                break;
            }
        }
    }
    return 0;
}
