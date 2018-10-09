#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    long long res,min = 10000000000,max = 0;
    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a);
        if(a>max) max = a;
        if(a<min) min = a;
    }
    max++;
    res = max - min - n;
    printf("%I64d\n",res);


    return 0;
}
