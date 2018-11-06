#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll arr[10000000], a[1000001];
bool prime[20000000+1];

void SieveOfEratosthenes(ll n)
{

    memset(prime, true, sizeof(prime));

    ll l = 4;
    while(l<=n){
        prime[l]==false;
        l+=2;
    }

    for (ll p=3; p*p<=n; p+=2)
    {
        if (prime[p] == true)
        {
            for (ll i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

    ll i = 1;
    arr[0] = 2;
    for (ll p=3; p<=n; p+=2)
       if (prime[p])
              arr[i++] = p;
}

bool cmp(ll const &a, ll const &b){

    return a>b;
}
int main()
{
    SieveOfEratosthenes(20000000);
    ll n, t;
    scanf("%lld", &t);
    while(t--){

        scanf("%lld", &n);
        for(ll i = 0; i < n; i++)
            scanf("%lld", &a[i]);
        sort(a, a+n, cmp);
        bool f = false;
        for(ll j = 0; j < n; j++){

            ll tmp = sqrt(a[j]);
            if(tmp*tmp!=a[j])
                continue;
            ll sum = 1, m = a[j];
            for(ll i = 0; arr[i] * arr[i] <= m; i++){
                ll coun = 0;
                while(m%arr[i]==0){

                    coun++;
                    m /= arr[i];
                }
                sum *= (coun+1);
            }
            if(m==a[j])
                sum++;

            if(prime[sum] && sum!=2){
                if(f)
                    printf(" ");
                printf("%d", j+1);
                f = true;
            }
        }
        if(!f)
            printf("No supporter found.");
        printf("\n");
    }
    return 0;
}
