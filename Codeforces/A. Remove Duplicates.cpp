#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,l = 0;
    scanf("%d",&n);
    string s[n],s1[n],s2[n];

    cin>>s[0];
    s1[0] = s[0];

    for(int i = 1; i < n; i++){
        cin>>s[i];
        for(int j = 0; j<sizeof(s1)/sizeof(*s1);j++){
            if(s[i] == s1[j]){
                s1[j] = "c";
                break;
            }
        }
        s1[i] = s[i];
    }

    for(int i = 0; i < sizeof(s1)/sizeof(*s1); i++){
        if(s1[i] != "c"){
            s2[l] = s1[i];
            l++;
        }
    }

    printf("%d\n",l);

    for(int i = 0; i < l;i++){
        cout<<s2[i];
        if(i<l-1)
            printf(" ");
    }
    printf("\n");

    return 0;
}
