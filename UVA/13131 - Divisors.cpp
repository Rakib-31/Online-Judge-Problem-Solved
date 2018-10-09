#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    int x = 4556;
    cout<<to_string(x);
    while(test--){

        int n,k;
        long long sum = 0;
        scanf("%d%d",&n,&k);
        if(k == 1){
            printf("0\n");
            continue;
        }
        int root = sqrt(n);

        for(int i = 1; i <= root; i++){
            if(n%i==0){
                if(i % k != 0) sum += i;
                int t = n/i;
                if(i != t && (t % k) != 0) sum += t;
            }
        }
        printf("%lld\n",sum);
    }

    return 0;
}


