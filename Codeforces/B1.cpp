#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,max = -1,d = 0;
    string s,S1;
    string c[10000];
    map <string,int> mp;

    scanf("%d",&n);

    cin>>s;
    c[0]+=s[0];
    for(int i = 1; i < n; i++){
        c[i-1]+=s[i];
        c[i]+=s[i];
        d++;
    }

    for(int i = 0; i < d; i++){
        mp[c[i]]++;
        if(mp[c[i]]>max){
            max = mp[c[i]];
            S1 = c[i];
        }
    }

    cout<<S1<<endl;

    return 0;
}

