#include<bits/stdc++.h>
using namespace std;

#define Boost ios_base::sync_with_stdio(0); cin.tie(0)

int dis[100000];

struct node{
    int a,b;
    void fun(int x, int y){
        a = x;
        b = y;

    }
};

int main(){
    Boost;
    int t,m,n;
    char s;
    node ob;
    vector <node> vec;
    cin>>t;

    while(t--){
        cin>>n>>m;
        //getchar();
        memset(dis,0,sizeof(dis));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin>>s;
                //cout<<s<<endl;
                if(s=='1'){
                    ob.fun(i,j);
                    vec.push_back(ob);
                }
            }
            //getchar();
        }
        for(int i = 0; i < vec.size(); i++){
            for(int j = i+1; j < vec.size(); j++){
                int cal = abs(vec[i].a - vec[j].a) + abs(vec[i].b - vec[j].b);
                dis[cal]++;
            }
        }
        bool check = false;
        for(int i = 1; i< n+m-1; i++){
            if(check) cout<<" ";
            check = true;
            cout<<dis[i];
        }
        cout<<endl;
        vec.clear();
    }

    return 0;
}
