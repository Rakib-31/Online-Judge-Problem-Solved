#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t,count=1;
    scanf("%d",&n);
    t = n/2;
    for(int i = 2;i <= t;i++){
        if((n-i)%i==0)
            count++;
    }

    printf("%d\n",count);

    return 0;
}
