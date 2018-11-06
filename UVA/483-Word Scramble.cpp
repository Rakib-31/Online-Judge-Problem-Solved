#include<bits/stdc++.h>
using namespace std;

#define Boost ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define db double
#define fo freopen("output.txt","w",stdout)
#define in scanf
#define pr printf
#define rep(i, n) for(int i = 0; i < (n); i++)
#define repset(it, st) for(it = st.begin(); it != st.end(); it++)
#define cas(i) cout<<"Case "<<(int)(i)<<": "
#define mpii map<int,int>
#define mpci map<char,int>
#define mpic map<int,char>
#define mpis map<int,string>
#define mpsi map<string,int>
#define mpcc map<char,char>
#define mpss map<string,string>
#define setc set<char>
#define setcit set<char> ::iterator
#define veci vector<int>
#define vecc vector<char>
#define vecs vector<string>

string reverseWord(string s){
    int len = s.length();
    for(int i = 0; i < len/2; i++){
        swap(s[i],s[len-1-i]);
    }
    return s;
}

int main(){
    Boost;

    string str;


    while(getline(cin,str)){
        int len = str.length();
        string s = "";
        rep(i,len){
            if(str[i] == ' '){
                if(s.length()) cout<<reverseWord(s);
                cout<<' ';
                s = "";
            }
            else{
                s += str[i];
            }
        }
        if(s.length()) cout<<reverseWord(s);
        cout<<endl;
    }

    return 0;
}
