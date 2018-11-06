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

 bool prime[2002];

void SieveOfEratosthenes(int n)
{

    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
}

int main()
{
    //fo;
    SieveOfEratosthenes(2001);
    prime[1] = false;
    int t,cs = 1;
    string str;
    mpci mp;
    setc st;
    setcit it;

    in("%d",&t);
    getchar();
    while(cs <= t){
        string res = "";
        getline(cin,str);
        int n = str.length();
        rep(i,n){
            st.insert(str[i]);
            mp[str[i]]++;
        }
        repset(it,st){
            if(prime[mp[*it]]) res += *it;
        }
        if(res!="") cas(cs)<<res<<endl;
        else cas(cs)<<"empty"<<endl;
        st.clear();
        mp.clear();
        cs++;
    }

    return 0;
}
