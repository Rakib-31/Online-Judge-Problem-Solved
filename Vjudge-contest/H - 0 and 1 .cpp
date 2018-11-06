#include<bits/stdc++.h>
using namespace std;

string s;
bool x = true;

bool binsch(int k, int l){
    int mid;
    mid = (k + l)/2 + 1;
    if(s[mid] != s[k])
        return false;
    if((mid - k) == 1) return true;
    x = binsch(k,mid);
    if(x)
        binsch(mid,l);
    else return x;
}

int main(){

    int n,k,l;

    getline(cin,s);

    scanf("%d",&n);

    while(n--){
        scanf("%d%d",&k,&l);
        if(k<l)
            x = binsch(k,l);
        else x = binsch(l,k);

        if(x) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}
