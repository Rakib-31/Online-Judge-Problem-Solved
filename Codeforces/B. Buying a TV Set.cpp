#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,x,y,small,res1,res2;

    scanf("%I64d%I64d%I64d%I64d",&a,&b,&x,&y);

    small = __gcd(x,y);
    x /= small;
    y /= small;

    res1 = a / x;
    res2 = b / y;

    if(res1 < res2) printf("%I64d\n",res1);
    else printf("%I64d\n",res2);

    return 0;
}
