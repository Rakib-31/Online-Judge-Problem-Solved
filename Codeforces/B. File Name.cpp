#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,count = 0,co = 0;
    string s;

    scanf("%d",&n);

    cin>>s;

    for(int i = 0; i < s.size();i++){
        if(s[i] == 'x'){
            co++;
            if(co>2)
                count++;
        }
        else co = 0;
    }

    printf("%d\n",count);

    return 0;
}
