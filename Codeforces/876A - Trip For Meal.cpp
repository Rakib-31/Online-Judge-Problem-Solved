#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,n,sum,sum1,count;
    scanf("%d%d%d%d",&n,&a,&b,&c);
    if(n>1){
        if(a<b) sum=a;
        else sum=b;
        if(sum>c) sum1=c;
        else sum1=sum;
        count=n-2;
        sum+=sum1*count;
        printf("%d\n",sum);
    }
    else printf("0\n");
    return 0;
}
