#include <bits/stdc++.h>
using namespace std;

#define MAX 1001

int dp[MAX][MAX];
string s1,s2;

int LCS(int i, int j){
    if(i==s1.size() || j==s2.size())
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    if(s1[i]==s2[j])
        return dp[i][j] = 1+LCS(i+1,j+1);

    return dp[i][j] = max(LCS(i+1,j), LCS(i,j+1));
}

int main(){
    while(cin>>s1>>s2){
        memset(dp, -1, sizeof dp);
        int ans=LCS(0,0);
        cout<<ans<<endl;
    }
}
