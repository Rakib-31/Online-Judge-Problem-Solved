#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n,i,count=0;
    scanf("%d%d%d%d",&a,&b,&c,&n);
    int ar[n];
    for(i=1;i<=n;i++){
        scanf("%d",&ar[i]);
        if(ar[i]>b && ar[i]<c)
            count++;
    }

    printf("%d\n",count);

    return 0;
}
