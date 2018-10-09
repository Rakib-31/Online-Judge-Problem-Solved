#include<bits/stdc++.h>
using namespace std;

int a[1000000];

int main(){

    int n,k;

    scanf("%d%d",&n,&k);

    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    sort(a,a+n);

    if(k == 0){
        if(a[0]>1)
            printf("%d\n",a[0] - 1);
        else
            printf("-1\n");
    }
    else{
        int t = a[k-1];

        if(a[k] == t)
            printf("-1\n");
        else
            printf("%d\n",t);
    }

    return 0;
}

