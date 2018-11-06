#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t,t1=1,num,a[100],n1;
    scanf("%d",&t);

    while(t1<=t){
        memset(a,0,sizeof(a));
        bool check = true;
        scanf("%d",&n);
        n1 = n*n;
        while(n1--){
            scanf("%d",&num);
            a[num]++;
            if(a[num]>n) check = false;
        }
        printf("Case %d: ",t1);
        if(check) printf("yes\n");
        else printf("no\n");
        t1++;
    }

    return 0;
}

