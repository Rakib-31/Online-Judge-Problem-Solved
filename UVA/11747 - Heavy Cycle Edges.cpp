
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

struct node{
    ll x,y,z;
};

vector<ll> v;
int par[10001],ranks[10001];
bool check = false;

bool comparetor(node x, node y){
    return x.z < y.z;
}

int isUnion(ll val){
    if(par[val] == val) return val;
    return par[val] = isUnion(par[val]);
}

void kruskal(node ob[],int n){
    rep(i,n){
        int u = isUnion(ob[i].x);
        int w = isUnion(ob[i].y);

        if(ranks[u] > ranks[w])
            par[w] = u;
        else par[u] = w;
        if(ranks[u] == ranks[w]){
            ranks[w]++;
                //cout<<ob[i].x<<" "<<ob[i].y<<" "<<ob[i].z<<endl;
        }
        if(u == w) v.push_back(ob[i].z);
    }
}

int main(){
    fo;

    int n,m;
    node ob[25001];

    while(1){
        check = false;
        cin>>n>>m;
        if(!n && !m) break;
        rep(i,n)
            par[i] = i;

        rep(i,m){
            cin>>ob[i].x>>ob[i].y>>ob[i].z;
        }

        sort(ob,ob+m,comparetor);

        kruskal(ob,m);
        rep(i,v.size()){
            if(check) cout<<" ";
            check = true;
            cout<<v[i];
        }
        if(check) cout<<endl;
        else cout<<"forest"<<endl;
        v.clear();
    }

    return 0;
}
