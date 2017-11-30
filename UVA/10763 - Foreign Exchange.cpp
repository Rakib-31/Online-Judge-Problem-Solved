#include<bits/stdc++.h>
using namespace std;

int a[500000],b[500000],c[1000][1000];
int main()
{
    int i,n;
    while(1)
    {
        scanf("%d",&n);
        if(!n) break;
        memset(c, 0, sizeof c);
        bool t=true;
        for(i=0;i<n;i++)
        {
            scanf("%d%d",&a[i],&b[i]);
            c[a[i]][b[i]]++;
        }
        for(i=0;i<n;i++)
        {
            if(c[b[i]][a[i]]!=c[a[i]][b[i]])
            {
                t=false;
                break;
            }
        }

        if(t) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
