#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    set <int> st;
    vector <int> vec;
    int t;
    bool bl = false;

    scanf("%d%d",&n,&k);

    for(int i = 0; i < n;i++){
        scanf("%d",&t);
        int sz = st.size();
        st.insert(t);
        if(st.size()>sz){
            vec.push_back(i+1);
        }
    }
    if(vec.size() >= k){
        printf("YES\n");
        for(int i = 0; i < k; i++){
            if(bl) printf(" ");
            else bl = true;
            printf("%d",vec[i]);
        }
        printf("\n");
    }
    else printf("NO\n");

    return 0;
}
