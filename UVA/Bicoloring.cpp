#include<bits/stdc++.h>
using namespace std;

vector <int> vec[200];
bool check[200],color[200],process[200];
bool b;

bool checkValue(int t,int i,int cont){

    if(!check[vec[cont][i]]){
        if(t)
            color[vec[cont][i]] = true;
        else
            color[vec[cont][i]] = false;
        check[vec[cont][i]] = true;
        return true;
    }
    else{
        if(color[cont] == color[vec[cont][i]]){
            printf("NOT BICOLORABLE.\n");
            return false;
        }
        else return true;
    }
}

void bfs(){

   memset(check,false,sizeof(check));
   memset(process,false,sizeof(process));
   color[0] = true;
   check[0] = true;
   process[0] = true;
   queue <int> q;
   q.push(0);

   while(!q.empty()){

        int cont = q.front();
        q.pop();

        for(int i = 0; i < vec[cont].size(); i++){
            if(!color[cont]) b = checkValue(1,i,cont);
            else b = checkValue(0,i,cont);
            if(!b) return;
            if(!process[vec[cont][i]]){
                q.push(vec[cont][i]);
                process[vec[cont][i]] = true;
            }
        }
    }

    if(b) printf("BICOLORABLE.\n");

}

int main(){

    int node,edge,n,e,a,b;

    while(1){
        scanf("%d",&n);
        if(!n) break;

        scanf("%d",&e);
        if(!e) printf("BICOLORABLE.\n");
        else{
            for(int i = 0; i < e; i++){
                scanf("%d%d",&a,&b);
                vec[a].push_back(b);
                vec[b].push_back(a);
            }

            bfs();
            for(int i = 0; i < n; i++)
                vec[i].clear();
        }
    }

    return 0;
}
