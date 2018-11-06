#include<bits/stdc++.h>
using namespace std;

int main(){

    int t[5] = {2015,2010,2016,2017,2019};
    int a,n;
    bool ch;

    cin>>n;

    while(n--){
        ch = false;
        cin>>a;
        for(int i = 0; i < 5;i++){
            if(a==t[i])
            {
                ch = true;
                cout<<"HOSTED"<<endl;
                break;
            }
        }
        if(!ch) cout<<"NOT HOSTED"<<endl;
    }

    return 0;
}
