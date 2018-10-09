#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long a[100000],count=1,i,big=1;

    scanf("%d",&n);
    scanf("%I64d",&a[0]);

    for(i=1;i<n;i++){

    scanf("%I64d",&a[i]);

    if(a[i]>=a[i-1])
        count++;

    if(a[i]<a[i-1] || i==n-1){
        if(count>big)
            big=count;
            count=1;
    }

    }

    printf("%I64d\n",big);

    return 0;
}
