#include<bits/stdc++.h>
using namespace std;

typedef pair <int,int> pi;
vector < pair<pi,int> > v;
int parent[100002];

bool cmp(const pair<pi,int>& a, const pair<pi,int>& b){
    return a.second>b.second;
}

void reset(int n){
    for(int i = 1;i <= n;i++)
    parent[i] = i;
}

int findParent(int x){
    if(parent[x] == x)
        return x;
    return parent[x] = findParent(parent[x]);
}

bool unionFind(int a,int b)
{
    int j = findParent(a);
    int k = findParent(b);

    if(j != k)
    {
        parent[j] = k;
        return false;
    }
    return true;
}


int Kruskal(){
    int cost = 0;
    for(int i = 0;i < v.size();i++)
    {
        int j = v[i].first.first;
        int k = v[i].first.second;

        if(!unionFind(j,k))
            cost += v[i].second;
    }
    return cost;
}

int main()
{
    int x,y,z,test,totalCost;

    while(1){

        scanf("%d",&test);
        if(test){
            while(test--)
            {
                int node,edge;
                totalCost = 0;
                scanf("%d%d",&node,&edge);
                reset(node);
                while(edge--){
                    scanf("%d%d%d",&x,&y,&z);
                    v.push_back(make_pair(pi(x,y),z));
                    totalCost += z;
                }

                sort(v.begin(),v.end(),cmp);

                int cost = Kruskal();

                printf("%d\n",totalCost - cost);
                v.clear();
            }
        }
        else break;
    }

    return 0;
}

