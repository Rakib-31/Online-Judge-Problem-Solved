#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k;

    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&k);
        int d = k%3;
        if(d == 0) printf("no\n");
        else printf("yes\n");
    }
    return 0;
}
