#include<bits/stdc++.h>
#include<string>
using namespace std;

map <char, string> mp;
char m[150];

void decode(string str){
    string res = "";
    int n,sum = 0;
    int len = str.length();
    for(int i = len - 1; i >= 0; i--){
        n = str[i] - '0';
        sum += n;
        if(m[sum] == '+'){
            sum *= 10;
            continue;
        }
        res += m[sum];
        sum = 0;
    }
    cout<<res<<endl;
}

void encode(string str){
    string res = "";
    int len = str.length();
    for(int i = 0; i < len; i++){
        res += mp[str[i]];
    }
    for(int i = res.length()-1; i >=0 ; i--)
        cout<<res[i];
    cout<<endl;
}

void mapping(){
    string val;
    char let;

    mp[' '] = "32";
    mp['!'] = "33";
    mp[','] = "44";
    mp['.'] = "46";
    mp['?'] = "63";
    mp[':'] = "58";
    mp[';'] = "59";

    for(int i = 0; i < 123; i++){
        m[i] = '+';
    }
    m[32] = ' ';
    m[33] = '!';
    m[44] = ',';
    m[46] = '.';
    m[63] = '?';
    m[58] = ':';
    m[59] = ';';

    for(int i = 0; i < 26; i++){
        let = 'a' + i;
        int tem = 97 + i;
        m[tem] = let;
        stringstream ss;
        ss << tem;
        val=ss.str();
        mp[let] = val;

        let = 'A' + i;
        tem = 65 + i;
        m[tem] = let;
        stringstream s;
        s << tem;
        val=s.str();
        mp[let] = val;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    mapping();

    string str;

    while(getline(cin,str)){
        if(str[0]>='0' && str[0]<='9')
            decode(str);
        else encode(str);
    }

    return 0;
}
