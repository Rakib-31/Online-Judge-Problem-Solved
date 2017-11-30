#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,f;
    scanf("%d%d",&n,&f);
    int k[n],l[n],a[n],j=0;
    long long sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&k[i],&l[i]);
        if(k[i]>=l[i])
            sum+=l[i];
        else{
            sum+=k[i];
            k[i]=2*k[i];
            if(k[i]<l[i])
                a[j]=k[i]/2;
            else
                a[j]=(k[i]/2)-(k[i]-l[i]);
                j++;
        }
    }
    if(j<=f)
    {
        for(i=0;i<j;i++)
            sum+=a[i];
    }
    else{
        sort(a,a+j);
        i=j-1;
        while(f--)
        {
            sum+=a[i];
            i--;
        }
    }
    printf("%I64d\n",sum);
    return 0;
}
