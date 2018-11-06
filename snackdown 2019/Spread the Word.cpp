#include<bits/stdc++.h>
using namespace std;

long long arr[1000000],coun = 0;
long long p,sum = 1,n;

int fun(long long pos, long long val){
    long long tar;
    if(pos+val <= n) tar = pos+val;
    else tar = n;
    long long sum = 0;
    for(long long i = pos; i < tar; i++){
        sum += arr[i];
    }
    return sum;
}

int recursion(long long pos, long long val){
    sum += val;
    coun++;
    if(sum >= n) return coun;
    p = p + fun(pos+1,val);
    pos += val;
    if(pos<=n)
        return recursion(pos,p);
    else return coun++;
}

int main(){

    long long t,pos;

    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        pos = 0;
        coun = 0;
        sum = 1;
        for(int i = 0; i < n; i++){
            scanf("%lld",&arr[i]);
        }

        p = arr[0];

        long long res = recursion(pos,arr[0]);

        printf("%lld\n",res);
    }

    return 0;
}





