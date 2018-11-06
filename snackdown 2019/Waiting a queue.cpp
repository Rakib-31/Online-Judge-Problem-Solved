
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

int main(){

    Boost;

    int t;
    cin>>t;

    while(t--){
        ll n,m,k,l;

        cin>>n>>m>>k>>l;

        ll duration[n+1];

        rep(i,n)
            cin>>duration[i];

        duration[n] = k;

        sort(duration, duration+n+1);

        ll bore = (m+1)*l, small = LONG_MAX;

        rep(i,n+1){
            small = min(small , abs(bore - duration[i]));
            if(i<n)
                bore+=l;
        }

        cout<<small<<endl;
    }

    return 0;
}
