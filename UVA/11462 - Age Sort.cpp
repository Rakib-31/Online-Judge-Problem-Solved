#include<bits/stdc++.h>
using namespace std;

int a[2000001],aux[101],result[2000001];

int main()
{
    int n,p,i;
    while(scanf("%d",&n)==1 && n!=0)
    {
        for(i=0;i<=n;i++)
        {
            a[i]=0;
            result[i]=0;
        }
        for(i=0;i<101;i++)
            aux[i]=0;

        bool t=true;
        int big=0;

        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            aux[a[i]]++;
            if(a[i]>big) big=a[i];
        }

        for(i=2;i<=big;i++)
            aux[i]=aux[i]+aux[i-1];

        for(i=0;i<n;i++)
        {
            result[aux[a[i]]]=a[i];
            aux[a[i]]--;
        }

        for(i=1;i<=n;i++){
            if(t) t=false;
            else printf(" ");
            printf("%d",result[i]);
        }
        printf("\n");
    }

    return 0;
}
