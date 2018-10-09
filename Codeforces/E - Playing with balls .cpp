#include<bits/stdc++.h>
using namespace std;

int main(){

    while(1){
        int t;


        scanf("%d",&t);
        if(t == -1) break;
        int d[t],v[t];

        for(int i = 0; i < t; i++){

            vector <int> st,st1,sk,sk1;
            scanf("%d%d",&d[i],&v[i]);

            int first = pow(2,d[i]-1);
            int last = first * 2 - 1;
            int mid = (first + last) / 2;
            for(int j = first; j <= mid; j++){
                if(pos){
                    st.push_back(j);
                    pos = false;
                }
                else{
                    st1.push_back(j);
                    pos = true;
                }
            }
            for(int j = mid + 1; j <= last; j++){
                if(pos1){
                    sk.push_back(j);
                    pos1 = false;
                }
                else{
                    sk1.push_back(j);
                    pos1 = true;
                }
            }
            if(v[i] % 2 == 0){
                if(b){
                    printf("%d\n",sk.front());
                }
            }
        }
    }

    return 0;
}
