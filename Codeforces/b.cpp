#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t,n,y,p=1;

    cin>>t;

    while(p<=t){
        cin>>n>>y;
        int coun=0;
        if(n-2>0 && y+1<9)
            coun++;
        if(n-1>0 && y+2<9)
            coun++;
        if(n+1<9 && y+2<9)
            coun++;
        if(n+2<9 && y+1<9)
            coun++;
        if(n-2>0 && y-1>0)
            coun++;
        if(n-1>0 && y-2>0)
            coun++;
        if(n+1<9 && y-2>0)
            coun++;
        if(n+2<9 && y-1>0)
            coun++;
        cout<<"Case "<<p<<": "<<coun<<endl;
        p++;
    }

    return 0;
}


