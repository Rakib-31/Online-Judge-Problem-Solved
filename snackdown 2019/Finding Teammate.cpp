#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

ll check(ll n){
    ll res=1;
    while(n) {
        res=(res*(n-1))%MOD;
        n-=2;
    }
    return res;
}

int main() {
    int tc,n;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&n);
        int s[n+1];
        vector<ll> a;
        s[n]=0;
        for(int i = 0; i < n; i++)
            scanf("%d",&s[i]);

        sort(s,s+n);
        ll coun=1;
        for(int i = 0; i < n; i++) {
            if(s[i]==s[i+1]) coun++;
            else{
                a.push_back(coun);
                coun=1;
            }
        }

        ll res=1;
        int f=0;
        for(int i = 0; i < a.size(); i++){
            if(f) res=(((res*a[i-1])%MOD)*a[i])%MOD;
            if(a[i]&1) {
                f^=1;
                res=(res*check(a[i]-1))%MOD;
            }
            else{
                if(f) {
                    res=(res*check(a[i]-2))%MOD;
                    a[i]--;
                }
                else res=(res*check(a[i]))%MOD;
            }
        }
        printf("%lld\n",res);

    }


    return 0;
}
