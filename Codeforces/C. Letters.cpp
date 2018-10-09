#include<bits/stdc++.h>
using namespace std;

long long a1[1000000],a[1000000],b[1000000],coun = 0;

int main(){

    long long n,m;

    scanf("%I64d%I64d",&n,&m);

    for(int i = 0; i < n; i++){
        scanf("%I64d",&a[i]);
        a1[i] = coun + a[i];
        coun = a1[i];
    }

    for(int i = 0; i < m; i++)
        scanf("%I64d",&b[i]);

    for(int i = 0; i< m; i++){
        for(int j = 0; j < n; j++){
            if(b[i]<=a1[j]){
                printf("%d %I64d\n",j+1,b[i] - a1[j-1]);
                break;
            }
        }
    }

    return 0;
}
