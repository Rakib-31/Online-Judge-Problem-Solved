#include<bits/stdc++.h>
using namespace std;

bool prime[200],res[500];

int value[200],semi[200],j=0,l=0;

void SieveOfEratosthenes(int n)
{

    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p])
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    for (int p=2; p<=n; p++){
       if (prime[p]){
          value[j] = p;
          j++;
       }
    }
}

void semiPrime(int n){
    for(int i = 6; i <= 200; i++){
        if(!prime[i]){
            for(int k = 0; k < j; k++){
                if(i%value[k] == 0){
                    if(prime[i/value[k]] && value[k] != i/value[k]){
                        semi[l] = i;
                        l++;
                        break;
                    }
                }
            }
        }
    }
}

int main(){

    ios_base::sync_with_stdio(false);

    SieveOfEratosthenes(200);

    semiPrime(200);

    for(int i = 0; i < l; i++){
        for(int k = i; k < l; k++){
            res[semi[i] + semi[k]] = true;
        }
    }

    int t,n;

    cin>>t;
    while(t--){
        cin>>n;
        if(res[n]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}

