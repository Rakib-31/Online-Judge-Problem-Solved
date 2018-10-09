#include<bits/stdc++.h>
using namespace std;

char c[1000][1000];

int main(){

    int n,m,field = 1;
    bool flag = false;

    while(1){
        scanf("%d%d",&n,&m);
        if(n == 0 && m == 0) break;

        int count = 0;
        bool con = true;

        if(flag) printf("\n");
        else flag = true;

        for(int i = 0; i < n; i++){
            getchar();
            for(int j = 0; j < m; j++){
                scanf("%c",&c[i][j]);
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                count = 0;
                if(c[i][j]!='*'){

                    if(i-1>=0){
                        if(c[i-1][j] == '*')
                            count++;
                    }
                    if(i+1<=n-1){
                        if(c[i+1][j] == '*')
                            count++;
                    }
                    if(j-1>=0){
                        if(c[i][j-1] == '*')
                            count++;
                    }
                    if(j+1<=m-1){
                        if(c[i][j+1] == '*')
                            count++;
                    }
                    if(i-1>=0 && j-1>=0){
                        if(c[i-1][j-1] == '*')
                            count++;
                    }
                    if(i-1>=0 && j+1<=m-1){
                        if(c[i-1][j+1] == '*')
                            count++;
                    }
                    if(i+1<=n-1 && j-1>=0){
                        if(c[i+1][j-1] == '*')
                            count++;
                    }
                    if(i+1<=n-1 && j+1<=m-1){
                        if(c[i+1][j+1] == '*')
                            count++;
                    }
                    c[i][j] = count + 48;
                }
            }
        }

        printf("Field #%d:\n",field);

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                printf("%c",c[i][j]);
            }
            printf("\n");
        }
        field++;
    }

    return 0;
}


