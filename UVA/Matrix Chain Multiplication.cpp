#include <bits/stdc++.h>
using namespace std;

#define MAX 1000
#define INF 0x3f3f3f3f

int dp[MAX+1][MAX+1], matrix[MAX+1];

int matrixChain(int i, int j){
    if(i==j) return 0;

    if(dp[i][j]!=INF) return dp[i][j];

    for(int k=i; k<j; k++)
        dp[i][j] = min(dp[i][j], matrixChain(i,k) + matrixChain(k+1,j) + matrix[i-1]*matrix[k]*matrix[j]);

    return dp[i][j];
}

int main(){
    int n;
    scanf("%d",&n);

    memset(dp, INF, sizeof dp);

    for(int i=0;i<n;i++)
        matrix[i]=i+1;
    clock_t start, stop;
    start = clock();
    int ans = matrixChain(1,n-1);
    stop = clock();
    double time = (double)(stop-start)/CLOCKS_PER_SEC;
    cout<<time<<endl;
    cout<<ans<<endl;
}
