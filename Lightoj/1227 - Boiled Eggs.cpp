#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,p,q,test,t = 1,m;

    scanf("%d",&test);

    while(t <= test){

        int sum = 0,result = 0,last = 0;;

        scanf("%d%d%d",&n,&p,&q);
        for(int i = 0; i < n; i++){
            scanf("%d",&m);
            sum += m;
            result++;
            if(sum <= q && result <= p)
                last++;
        }

        printf("Case %d: %d\n",t,last);
        t++;
    }

    return 0;
}
