#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k;

    scanf("%d",&t);
    while(t--){
        scanf("%d",n);
        for(int i = 1; i <= n/2; i++){
            a[i-1] = i;
        }
        int j = 0;
        for(int i = n+1; i <= n; i++){
            b[j] = i;
            j++;
        }
        printf("%d\n",n/2);
        for(int i = 0; i < n/2; i++){
            for(int j = 0; j < m; j++){
                printf("%d\n",a[i]);
            }
            for
        }
    }
    return 0;
}

