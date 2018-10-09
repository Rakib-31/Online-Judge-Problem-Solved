#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,a1,a2,b1,b2,c1,c2;

    cin>>n>>a1>>a2>>b1>>b2>>c1>>c2;

    if(((a1<b1 && a2>b2) && (a1<c1 && a2>c2)) || ((a1<b1 && a2<b2) && (a1<c1 && a2<c2)) || ((a1>b1 && a2<b2) && (a1>c1 && a2<c2)) || ((a1>b1 && a2>b2) && (a1>c1 && a2>c2)))
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
