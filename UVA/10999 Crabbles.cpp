#include<bits/stdc++.h>
using namespace std;

int main(){

    int i,test,wordNum,point,numCrables;
    string word[100000];
    map <char,int> mp;
    char c,ch;

    scanf("%d",&wordNum);

    getchar();

    for(i = 0; i < wordNum; i++)
        getline(cin,word[i]);
    scanf("%d",&test);
    while(test--){
        long long max = -1,coun = 0,j;
        scanf("%d",&numCrables);
        getchar();
        for(i = 0; i < numCrables; i++){
            scanf("%c",&c);
            getchar();
            scanf("%d",&point);
            if(point > mp[c])
                mp[c] = point;
            getchar();
        }
        for(i = 0; i < wordNum; i++){
            int len = word[i].length();
            for(j = 0; j < len; j++){
                coun += mp[word[i][j]];
            }
            if(coun > max){
                max = coun;
                coun = 0;
            }
        }
        printf("%ld\n",max);
        mp.clear();
    }

    return 0;
}

