#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n,a,b,s[100000],sum=0;
    int coun = 0;
    double result;

    scanf("%I64d%I64d%I64d",&n,&a,&b);
    for(int i = 0; i < n; i++){
        scanf("%I64d",&s[i]);
        sum+=s[i];
    }

    long long temp = s[0];

    result = temp*a/sum;
    if(result>=b){
        printf("%d\n",coun);
    }

    else{

        sort(s+1,s+n);

        for(int i = n-1; i >= 1; i--){
            sum-=s[i];
            result = temp*a/sum;
            coun++;
            if(result>=b){
                printf("%d\n",coun);
                break;
            }

        }
    }

    return 0;
}
