#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,t,count=0,p,low=2000000000,sum=0;
    scanf("%I64d",&t);
    long long value[t];
    for(i=0;i<t;i++)
        scanf("%I64d",&value[i]);
    sort(value,value+t);
    for(i=0;i<t-1;i++)
    {
        sum=abs(value[i+1]-value[i]);
        if(sum==low)
            count++;
        else if(sum<low){
            low=sum;
            count=1;
        }

    }
    printf("%I64d %I64d\n",low,count);

    return 0;
}
