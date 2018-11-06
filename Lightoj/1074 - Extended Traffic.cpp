#include<bits/stdc++.h>
using namespace std;

long long dist[2000];

struct path{
    int u,v,w;
    void set(int a,int b, int c){
        u = a;
        v = b;
        w = c;
    }
};

vector <path> vec;

void bellmanFord(int source, int node){
    dist[source] = 0;

    for(int i = 1; i < node; i++){
        for(int j = 0; j < vec.size(); j++){
            path pt = vec[j];
            if(dist[pt.v] > dist[pt.u] + pt.w && dist[pt.u] != INT_MAX){
                dist[pt.v] = dist[pt.u] + pt.w;
            }
        }
    }

    for(int j = 0; j < vec.size(); j++){
        path pt = vec[j];
        if(dist[pt.v] != dist[pt.u] + pt.w){
            dist[pt.v] = INT_MAX;
        }
    }
}

int main(){

    ios_base::sync_with_stdio(false);

    freopen("output.txt","w",stdout);

    int test,cases = 1;

    cin>>test;

    while(cases<=test){
        int node,edges;
        path pt;
        cin>>node;
        int business[node];
        for(int i = 1; i <= node; i++){
            cin>>business[i];
            dist[i] = INT_MAX;
        }

        cin>>edges;

        int left,right,cost;

        for(int i = 0; i < edges; i++){
            cin>>left>>right;
            cost = business[right] - business[left];
            cost = cost * cost * cost;
            pt.set(left,right,cost);
            vec.push_back(pt);
        }

        bellmanFord(1,node);

        int query,destination;

        cin>>query;

        cout<<"Case "<<cases<<":"<<endl;

        while(query--){
            cin>>destination;
            if(dist[destination] < 3 || dist[destination] == INT_MAX)
                cout<<"?"<<endl;
            else
                cout<<dist[destination]<<endl;
        }

        cases++;
        vec.clear();
    }

    return 0;
}
