#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n,k,m,get,d,dist,max = -1;

    scanf("%I64d%I64d%I64d%I64d",&n,&k,&m,&d);

    for(int i = 1; i <= d; i++){
        dist = n / (k * (i - 1) + 1);
        if(!dist) break;
        if(dist > m)
            dist = m;
        get = i * dist;

        if(get > max)
            max = get;
    }
    printf("%I64d\n",max);

    return 0;
}
