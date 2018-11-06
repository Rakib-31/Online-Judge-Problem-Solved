#include<bits/stdc++.h>
using namespace std;

bool triangle[3001][3001];

void setEdge(int u, int v){
    triangle[u-1][v-1] = true;
    triangle[v-1][u-1] = true;
}

int countTriangle(int n){
    int coun = 0;
    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            if(!triangle[i][j]) continue;
            for(int k = j + 1; k < n; k++){
                if(!triangle[j][k] || !triangle[i][k]) continue;
                coun++;
            }
        }
    }
    return coun;
}

int main(){

    int n,m,t,u,v;

    scanf("%d",&t);
    while(t--){
        memset(triangle,false,sizeof(triangle));
        scanf("%d%d",&n,&m);
        while(m--){
            scanf("%d%d",&u,&v);
            setEdge(u,v);
        }
        int res = countTriangle(n);
        printf("%d\n",res);
    }

    return 0;
}
