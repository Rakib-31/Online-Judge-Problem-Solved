#include<bits/stdc++.h>
using namespace std;

vector <int> vec[100000];
int cost[100][100],coun,avail[100000],junction;
bool vis[100000];

void dfs(int n)
{
    int i,les;
    vis[n] = true;
    for(i = 0;i < vec[n].size(); i++)
    {
        if(!vis[vec[n][i]])
        {
            if(cost[n][vec[n][i]] <= avail[n])
                avail[vec[n][i]] = cost[n][vec[n][i]];
            else avail[vec[n][i]] = avail[n];

            dfs(vec[n][i]);
        }
        else{
            if(cost[n][vec[n][i]] <= avail[n])
                les = cost[n][vec[n][i]];
            else les = avail[n];

            if(les < avail[vec[n][i]])
                coun += les;
            else coun += avail[vec[n][i]];
        }
    }
    return;
}

int main()
{
    freopen("testfile.txt","w",stdout);
    int i,road,test,one,two,value,node;

    scanf("%d",&test);
    while(test--){
        memset(vis, false, sizeof(vis));
        scanf("%d%d",&junction,&road);

        scanf("%d%d%d",&one,&two,&value);
        vec[one].push_back(two);
        cost[one][two] = value;
        node = one;

        for(i = 1; i < road; i++)
        {
            scanf("%d%d%d",&one,&two,&value);
            vec[one].push_back(two);
            cost[one][two] = value;
        }

        for(i = 1; i <= junction; i++)
            avail[i] = 1001;

        dfs(node);

        printf("%d\n",coun);
    }

    return 0;
}
