#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,a,b,i,con,sm,count=0;
    char c[200000];

    scanf("%d%d%d",&n,&a,&b);
    if(a>b){
        con = a;
        sm = b;
    }
    else{
        con = b;
        sm = a;
    }

    getchar();
    for(i = 0; i < n; i++){
        scanf("%c",&c[i]);

        if(c[i] == '.' && (con>0 || sm>0)){
            if(i == 0){
                c[i] = 'A';
                con--;
                count++;
            }
            else if(c[i-1] == '*')
            {
                if(con>sm){
                    c[i] = 'A';
                    con--;
                    count++;
                }
                else if(con<sm){
                    c[i] = 'B';
                    sm--;
                    count++;
                }
                else if(con>0 && con == sm){
                    c[i] = 'A';
                    con--;
                    count++;
                }
            }
            else if(c[i-1] == 'B')
            {
                c[i] = 'A';
                if(con != 0){
                    con--;
                    count++;
                }
            }
            else if(c[i-1] == 'A')
            {
                c[i] = 'B';
                if(sm != 0){
                    sm--;
                    count++;
                }
            }
            else if(c[i-1]=='.'){
                if(sm==0 && con>0){
                    c[i] = 'A';
                    con--;
                    count++;
                }
                else if(con==0 && sm>0){
                    c[i] = 'B';
                    sm--;
                    count++;
                }
            }
        }
    }

    printf("%d\n",count);

    return 0;
}

