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

ll t[7500];

void changeAll(int val){
    t[0] = 1;
    int coin[] = {1,5,10,25,50};
    rep(i,5){
        for(int j = coin[i]; j < val; j++){
            t[j] += t[j - coin[i]];
        }
    }
}

int main(){
    Boost;

    changeAll(7500);

    int n;

    while(cin>>n)
        cout<<t[n]<<endl;

    return 0;
}
