#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,count = 0;
    string s;

    scanf("%d",&n);

    cin>>s;

    if(n == 1 && s=="0")
        printf("0\n");

    else{

        for(int i = 0; i < n; i++){
            if(s[i] == '0')
                count++;
        }

        printf("1");
        for(int i = 0; i < count; i++){
            printf("0");
        }
        printf("\n");
    }

    return 0;
}

