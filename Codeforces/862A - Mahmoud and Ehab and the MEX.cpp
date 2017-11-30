#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,a,i,min=0,big,c=0,r;
    scanf("%d%d",&n,&x);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(x>a) min++;
        else if(x==a) c++;
    }
    min=x-min;
    r=min+c;
    printf("%d\n",r);
    return 0;
}
