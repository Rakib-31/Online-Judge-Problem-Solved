#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n,m,k,cl,row,d;
    d = 1;

    scanf("%I64d%I64d%I64d",&n,&m,&k);

    if(k<=n-1)
        printf("%I64d %I64d\n",k+1,d);
    else if(k>n-1 && k<(n-1+m-1)){
        long long t = k-(n-1);
        printf("%I64d %I64d\n",n,t+1);
    }
    else if(k==(n-1+m-1)){
        printf("%I64d %I64d\n",n,m);
    }
    else if(k>(n-1+m-1)){
        long long t = k - (n-1+m-1);
        long long col = t/(m-1);
        long long last = t%(m-1);
        row = n-col;
        if(last == 0){
            if(col%2==0)
                cl = m;
            else
                cl = 2;
        }
        else{
            row--;
            if(col%2==0)
                cl = m+1-last;
            else
                cl = last+1;

        }
        printf("%I64d %I64d\n",row,cl);
    }

    return 0;
}

