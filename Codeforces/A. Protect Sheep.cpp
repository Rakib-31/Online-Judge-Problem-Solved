#include<bits/stdc++.h>
using namespace std;

int main(){

    int x,y,i;
    char c[500][500];
    bool b = true;
    scanf("%d%d",&x,&y);
    for(i=0;i<x;i++){
            getchar();
        for(int j=0;j<y;j++){
            scanf("%c",&c[i][j]);
        }
    }
    for(i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(c[i][j]=='S'){

                if(i+1<x && c[i+1][j]=='.')
                    c[i+1][j]='D';
                else if(i+1<x && c[i+1][j]=='W')
                    b=false;
                if(i-1>=0 && c[i-1][j]=='.')
                    c[i-1][j]='D';
                else if(i-1>=0 && c[i-1][j]=='W')
                    b=false;
                if(j+1<y && c[i][j+1]=='.')
                    c[i][j+1]='D';
                else if(j+1<y && c[i][j+1]=='W')
                    b=false;
                if(j-1>=0 && c[i][j-1]=='.')
                    c[i][j-1]='D';
                else if(j-1>=0 && c[i][j-1]=='W')
                    b=false;
            }
        }
    }

    if(!b)
        printf("No\n");
    else{
        printf("Yes\n");
        for(i=0;i<x;i++){
            for(int j=0;j<y;j++){
                printf("%c",c[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
