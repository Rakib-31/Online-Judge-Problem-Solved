#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,s,m[1000],k[1000],t1 = 0,t2 = 1,ex1,ex2,v1,v2;
    bool b;

    scanf("%d%d",&n,&s);

    for(int i = 1; i <=n; i++)
        scanf("%d%d",&m[i],&k[i]);

    m[0] = 0;
    k[0] = 0 - s -1;

    for(int i = 0; i <=n; i++){
        ex1 = m[i];
        ex2 = k[i]+1+s;
        v2 = ex2%60;
        v1 = ex2/60;
        ex1+=v1;
        ex2=v2;
        t1 = m[i];
        t2 = k[i]+2+2*s;
        v2 = t2%60;
        v1 = t2/60;
        t1+=v1;
        t2=v2;
        if((t1==m[i+1] && t2<=k[i+1]) || (t1<m[i+1])){
            printf("%d %d\n",ex1,ex2);
            b = true;
            break;
        }
        else b = false;
    }

    if(!b){
        k[n] = k[n]+1+s;
        t1 = k[n]/60;
        t2 = k[n]%60;
        k[n] = t2;
        m[n] += t1;
        printf("%d %d\n",m[n],k[n]);
    }

    return 0;
}
