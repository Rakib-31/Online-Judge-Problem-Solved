#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    string s[1000],temp;
    bool bl;

    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        cin>>s[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(s[j].size()<s[i].size()){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    for(int i = 0; i < n-1; i++){
        if(s[i+1].find(s[i]) >= 0 && s[i+1].find(s[i])<100){
            bl = true;
        }
        else{
            bl = false;
            break;
        }
    }

    if(bl){
        printf("YES\n");
        for(int i = 0; i < n; i++){
            cout<<s[i]<<endl;
        }
    }
    else printf("NO\n");

    return 0;
}

