#include<bits/stdc++.h>
using namespace std;

int main(){

    string s[10000],s1;
    set <string> st;

    int n;

    scanf("%d",&n);
    for(int i = 0;i < n; i++){
        cin>>s[i];
        getchar();
        bool b = true;
        sort(s[i].begin(),s[i].end());
        s1 += s[i][0];
        for(int j = 1;j<s[i].length();j++){
            if(s[i][j] != s[i][j-1]){
                s1+=s[i][j];
            }
        }
        st.insert(s1);
        s1.clear();
    }
    printf("%d\n",st.size());

    return 0;
}

