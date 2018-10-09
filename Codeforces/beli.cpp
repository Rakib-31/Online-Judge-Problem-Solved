#include<bits/stdc++.h>
using namespace std;

#define INF 100
int distan[100];
typedef pair <int,int> pi;
vector <pair <pi,int> > v;

bool bal(int src,int node, int e){
    distan[src] = 0;
    for(int i = 0;i < node-1;i++){
        for(int j = 0;j < e;j++){
            int a = distan[v[j].first.first];
            int b = v[j].second;
            int c = v[j].first.second;
            if(a + b < distan[c])
                distan[c] = a + b;
        }
    }

    for(int j = 0;j < e;j++){
        int a = distan[v[j].first.first];
        int b = v[j].second;
        int c = v[j].first.second;
        if(a + b < distan[c]){
            cout<<"Negetive loop detected"<<endl;
            return false;
        }
    }
    return true;
}

int main()
{
    int x,y,z,n,e;
    scanf("%d%d",&n,&e);
    for(int i = 0;i < e;i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        v.push_back(make_pair(pi(x,y),z));
        distan[x] = INF;
        distan[y] = INF;
    }

    if(bal(0,n,e)){
        for(int i = 0;i < e;i++){
            cout<<v[i].first.first<<" "<<v[i].first.second<<" "<<distan[v[i].first.second]<<endl;
        }
    }

    return 0;
}
