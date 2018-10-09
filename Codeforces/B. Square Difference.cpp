#include<bits/stdc++.h>
using namespace std;

bool prime(long long res){
    for(long long i = 3; i*i <= res; i+=2){
        if(res%i==0)
            return false;
    }
    return true;
}

int main(){

    int t;
    long long a,b,res;
    scanf("%d",&t);
    while(t--){
        scanf("%I64d%I64d",&a,&b);
        if((a-b)==1){
            res = ((a-b)*b) + ((a-b)*a);

            if(prime(res))
                printf("YES\n");
            else printf("NO\n");
        }
        else printf("NO\n");

    }

    return 0;
}
