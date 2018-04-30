#include<bits/stdc++.h>
using namespace std;

int main(){

    int k,n,s,p,total,result;
    scanf("%d%d%d%d",&k,&n,&s,&p);

    result = n/s;
    if((s*result) < n) result++;
    total = result * k;
    result = total / p;
    if(p*result < total) result++;

    printf("%d\n",result);

    return 0;
}
