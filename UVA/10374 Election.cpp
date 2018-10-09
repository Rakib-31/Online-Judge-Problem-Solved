#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt","w",stdout);
    int t,n,m;
    bool flag = false;
    string can,party,select,str;
    map <string, int> mp;
    map<string, string> mpstr;

    scanf("%d",&t);

    while(t--){
        if(flag) printf("\n");
        else flag = true;
        int tempMax = -1,max = -1;

        scanf("%d\n",&n);
        //getchar();
        for(int i = 0; i < n; i++){
            getline(cin,can);
            getline(cin,party);
            mpstr[can] = party;
            mp[can]++;
        }
        scanf("%d\n",&m);
        //getchar();
        for(int i = 0; i < m; i++){
            getline(cin,select);
            mp[select]++;
            if(mp[select]>1){
                if(mp[select] >= max){
                    tempMax = max;
                    max = mp[select];
                    str = mpstr[select];
                }
            }
            else mp[select] = 0;
        }

        if(max != tempMax)
            printf("%s\n",str.c_str());
        else printf("tie\n");
        mp.clear();
        mpstr.clear();
    }

    return 0;
}
