
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
#define sti stack <int>
#define p_b push_back
#define ms(a,b) memset(a, b, sizeof(a))

//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*------------------------------------------------*/

/*-----------------------Bitmask------------------*/
//int Set(int N,int pos){return N=N | (1<<pos);}
//int reset(int N,int pos){return N= N & ~(1<<pos);}
//bool check(int N,int pos){return (bool)(N & (1<<pos));}
/*------------------------------------------------*/

int t,w,n;
int d[40],v[40];

int dp[40][1100];
int path[40][1100];

int func(int idx, int air)
{
    if(idx>=n) return 0;

    int &ret=dp[idx][air];
    if(ret!=-1) return ret;

    int p=0,q=0;

    if((air+(3*w*d[idx]))<=t)
        p=v[idx]+func(idx+1,air+(3*w*d[idx]));
    q=func(idx+1,air);

    if(p>q) path[idx][air]=1;
    else path[idx][air]=2;

    return ret=max(p,q);
}

veci ans;

int path_print(int idx, int air)
{
    if(path[idx][air]==-1) return 0;

    if(path[idx][air]==1)
    {
        ans.p_b(idx);
        return 1+path_print(idx+1,air+(3*w*d[idx]));
    }
    else
        return path_print(idx+1,air);
}

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    bool test=0;

    while(in("%d%d",&t,&w)==2)
    {
        if(test==1) pr("\n");
        test=1;
        in("%d",&n);
        rep(i,n) in("%d%d",&d[i],&v[i]);
        ms(dp,-1);
        ms(path,-1);
        int profit=func(0,0);

        pr("%d\n",profit);
        pr("%d\n",path_print(0,0));
        rep(i,ans.size())
            pr("%d %d\n",d[ans[i]],v[ans[i]]);
        ans.clear();
    }

    return 0;
}
