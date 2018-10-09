#include<bits/stdc++.h>
using namespace std;

char c[1000][1000];

int main(){

    int n,m,count = 0;
    bool con = true;

    scanf("%d%d",&n,&m);



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
                if(c[i][j]>='1' && c[i][j]<='8'){
                    int t = c[i][j] - 48;

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
                    if(count!=t)
                    {
                        con = false;
                        break;
                    }
                }

                else if(c[i][j]=='.'){

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

                    if(count>0){
                        con = false;
                        break;
                    }
                }
            }


        }
        if(!con) break;
    }

    if(con)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

