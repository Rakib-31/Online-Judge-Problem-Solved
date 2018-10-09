#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    int div,num,fol;
    char c1,c2,c3;
    cin>>s;
    scanf("%c%c%c",&c1,&c2,&c3);
    scanf("%d",&div);

    int len = s.size();

    for(int i = 0; i < len; i++){
        num *= 10;
        num += s[i] - '0';
        fol = num / div;
    }


    return 0;
 }
