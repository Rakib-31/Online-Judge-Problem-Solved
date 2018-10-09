#include<bits/stdc++.h>
using namespace std;

int a[1000001];

int main()
{
    bool t=false;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2!=0)
            t=true;
    }
    if(t) printf("First\n");
    else printf("Second\n");

    return 0;
}
