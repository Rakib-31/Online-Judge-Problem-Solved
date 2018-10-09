#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;

    scanf("%d",&n);

    string s[8],s1[8],s2,s3[8];
    s[0] = "red";
    s[1] = "purple";
    s[2] = "yellow";
    s[3] = "orange";
    s[4] = "green";
    s[5] = "blue";

    s1[0] = "Reality";
    s1[1] = "Power";
    s1[2] = "Mind";
    s1[3] = "Soul";
    s1[4] = "Time";
    s1[5] = "Space";

    for(int i = 0; i < n; i++){
        cin>>s2;
        for(int j = 0; j < 6; j++){
            if(s2 == s[j]){
                s[j] = "s";
            }
        }
    }
    int k = 0;

    for(int i = 0; i < 6; i++){
        if(s[i] != "s"){
            s3[k] = s1[i];
            k++;
        }
    }

    printf("%d\n",k);

    for(int i = 0; i < k; i++){
        cout<<s3[i]<<endl;
    }


    return 0;
}

