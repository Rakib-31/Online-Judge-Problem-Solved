#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,t,i,j;
    long long a[10005],b[10005];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        int count=0;
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        for(i=0;i<m;i++)
            scanf("%lld",&b[i]);
        sort(a,a+n);
        sort(b,b+m);
        i=0;
        j=0;
        while(i<n && j<m)
        {
            if(a[i]>b[j])
            {
                j++;
                count++;
            }
            else if(b[j]>a[i])
            {
                i++;
                count++;
            }
            else
            {
                i++;
                j++;
            }
        }
        count+=n-i+m-j;
        printf("%d\n",count);
    }
    return 0;
}
