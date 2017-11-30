#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map <int, int> mp;
    int i,n,m,c,p;
    while(1)
    {
        scanf("%d%d",&n,&m);
        if(!n && !m) break;
        c=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&p);
            mp[p]++;
        }

        for(i=0;i<m;i++)
        {
            scanf("%d",&p);
            mp[p]++;
            if(mp[p]>1) c++;
        }
        printf("%d\n",c);
        mp.clear();
    }

    return 0;
}
