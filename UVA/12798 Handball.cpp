#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m,num;

    while(scanf("%d%d",&n,&m) != EOF){
        int count = 0;

        while(n--){
            bool flag = true;
            for(int i = 0; i < m; i++){
                scanf("%d",&num);
                if(num == 0) flag = false;
            }
            if(flag) count++;
        }

        printf("%d\n",count);
    }

    return 0;
}
