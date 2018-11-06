#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n,arr[100002],coun,sum,t,pos,val,p;

    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        pos = 0;

        for(int i = 0; i < n; i++){
            scanf("%lld",&arr[i]);
        }

        sum = 1 + arr[0];
        coun = 1;
        p = arr[0];
        val = p;

        for(int i = 0; i < n; i++){
            if(sum>=n) break;
            for(int j = i+1; j <= i+p; j++){
                val += arr[j];
            }
            sum += val;
            i += p - 1;
            p = val;
            coun++;
        }

        printf("%lld\n",coun);
    }

    return 0;
}





