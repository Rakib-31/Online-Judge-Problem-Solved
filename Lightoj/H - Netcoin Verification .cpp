#include<bits/stdc++.h>
using namespace std;

int a[1000000];

int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        long long sum = 0,res = 0;
        scanf("%d",&n);
        for(int i = 0; i < n; i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+n);

        for(int i = n-2;i >= 0; i--){
            sum += a[i];
            res += sum;
        }
        sum += a[n-1];
        res += sum;
        printf("%lld\n",res);
    }
    return 0;
}

