#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n;

    scanf("%I64d",&n);

    n = n + 1;

    if(n == 1)
        printf("0\n");
    else if(n%2==0)
        printf("%I64d\n",n/2);
    else printf("%I64d\n",n);

    return 0;
}

