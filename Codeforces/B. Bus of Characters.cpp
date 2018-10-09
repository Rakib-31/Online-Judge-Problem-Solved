#include<bits/stdc++.h>
using namespace std;

int arr[1000000];

int main(){

    int n,j = 0;
    char s;
    stack <int> st;
    vector <int> v;
    map <int,int> mp;
    bool b = false;

    scanf("%d",&n);
    int m = 2*n;
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
        mp[arr[i]] = i + 1;
    }

    getchar();
    sort(arr,arr+n);

    for(int i = 0; i < m; i++){
        scanf("%c",&s);
        if(s == '0'){
            st.push(mp[arr[j]]);
            v.push_back(mp[arr[j]]);
            j++;
        }
        else if(s == '1'){
            v.push_back(st.top());
            st.pop();
        }
    }

    for(int i = 0; i < v.size(); i ++){
        if(b) printf(" ");
        else b = true;
        printf("%d",v[i]);
    }

    printf("\n");

    return 0;
}

