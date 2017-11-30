#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,k,a[100],arya=0,sum=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        arya+=a[i];
        if(arya>=8){
            sum+=8;
            arya-=8;
        }
        else{
            sum+=arya;
            arya=0;
        }
        if(sum>=k) break;
    }
    if(sum>=k) printf("%d\n",i+1);
    else printf("-1\n");

    return 0;
}
