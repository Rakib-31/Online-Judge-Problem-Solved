#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,n,k,p;
    bool ch;

    cin>>n;

    while(n--){
        cin>>a>>k;
        int coun = 0;
        for(int i = 0; i < a;i++){
            cin>>p;
            if(p>1)
            {
               coun++;
            }
        }
        if(coun>k) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}

