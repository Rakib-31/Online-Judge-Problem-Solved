#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,t,pp,val;

    while(scanf("%d",&n) != EOF){

        queue <int> q;
        stack <int> st;
        priority_queue <int> pq;

        bool qbool = true,stbool = true,pqbool = true;

        for(int i = 0; i < n; i++){
            scanf("%d%d",&pp,&val);
            if(pp == 1){
                q.push(val);
                st.push(val);
                pq.push(val);
            }
            else{
                if(qbool){
                    if(!q.empty() && q.front() == val)
                        q.pop();
                    else qbool = false;
                }
                if(stbool){
                    if(!st.empty() && st.top() == val)
                        st.pop();
                    else stbool = false;
                }
                if(pqbool){
                    if(!pq.empty() && pq.top() == val)
                        pq.pop();
                    else pqbool = false;
                }
            }
        }

        if(!n || (qbool && stbool) || (qbool && pqbool) || (stbool && pqbool) || (qbool && stbool && pqbool))
            printf("not sure\n");
        else if(qbool)
            printf("queue\n");
        else if(stbool)
            printf("stack\n");
        else if(pqbool)
            printf("priority queue\n");
        else printf("impossible\n");
    }
    return 0;
}
