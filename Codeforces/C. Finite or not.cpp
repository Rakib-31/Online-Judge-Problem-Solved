#include<bits/stdc++.h>
using namespace std;

long long gcd(long long mx,long long mn){

    long long ret = mx%mn;
    if(ret == 0)
        return mn;
    gcd(mn,ret);
}

long long MAX_MIN(long long q,long long b){

    long long mx,mn,div;

     mx = max(q,b);
     mn = min(q,b);
     div = gcd(mx,mn);
    return div;
}

int main(){

    long long b,p,q,div,gd;

    int n;

    scanf("%d",&n);

    while(n--){

        scanf("%I64d%I64d%I64d",&p,&q,&b);

        if(p == 0)
            printf("Finite\n");
        else{

            gd = MAX_MIN(p,q);

            q /= gd;

             b = MAX_MIN(q,b);

            while(b!=1){
                while (q % b == 0) q /= b;

                b = MAX_MIN(q,b);
            }
            if(q == 1)
                printf("Finite\n");
            else
                printf("Infinite\n");
        }
    }


    return 0;
}

