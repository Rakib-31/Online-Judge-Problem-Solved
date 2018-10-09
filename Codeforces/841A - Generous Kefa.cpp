#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,k,big=0;
    char c;
    map <char,int> mp;

    scanf("%d%d",&n,&k);

    for(i=0;i<n;i++)
    {
        scanf(" %c",&c);
        mp[c]++;
        if(mp[c]>big) big=mp[c];
    }

    if(big>k) printf("NO\n");
    else printf("YES\n");

    return 0;
}
