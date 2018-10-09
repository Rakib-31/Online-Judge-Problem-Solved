#include<bits/stdc++.h>
using namespace std;

map <int,bool>flag;

void fun(){

    int n,a[30000],c[30000];
    int big[30000];
    int sum = 2000000000;

    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < n; i++){
        scanf("%d",&c[i]);
    }

    for(int i = 1; i < n; i++){
        big[i] = 1000000000;
        for(int j = i+1; j <n; j++){
            if(a[i]<a[j]){
                big[i] = min(big[i],c[i]+c[j]);
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = i+1; j <n; j++){
            if(a[i]<a[j]){
                sum = min(sum,c[i]+big[j]);
            }
        }
    }

    if(sum<1000000000)
        printf("%I64d\n",sum);
    else printf("-1\n");
}

int main(){

    fun();

    return 0;
}

