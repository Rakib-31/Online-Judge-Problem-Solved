#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,sum=0,sum1;
    scanf("%d",&n);
    int b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        sum+=a;
    }
    for(int i=0;i<n;i++)
        scanf("%d",&b[i]);
    sort(b,b+n);
    sum1=b[n-2]+b[n-1];
    if(sum1>=sum)
        printf("YES\n");
    else printf("NO\n");

    return 0;
}

