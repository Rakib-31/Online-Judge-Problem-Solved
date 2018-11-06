
#include<iostream>
#include<map>
#include<cstring>
#include<cstdio>
#include<vector>

using namespace std;

int main(){

    int n,p,i,j,rat[1000],count = 0,max = -1,min = 1001;
    map <int , int> mp;
    vector < int > vec,con;
    bool elim[1000],shorto = false;
    memset(elim,true,sizeof(elim));

    scanf("%d%d",&n,&p);
    int t = n / 2;
    if(n%2 != 0) t++;

    for(i = 0; i < n; i++){
        for(j = 1; j <= p; j++){
            scanf("%d",&rat[j]);
            if(rat[j]>max){
                max = rat[j];
                con.clear();
                con.push_back(j);
            }
            else{
                if(rat[j] == max){
                    con.push_back(j);
                }
            }
            if(rat[j] < min){
                min = rat[j];
                vec.clear();
                vec.push_back(j);
            }
            else if(rat[j] == min){
                vec.push_back(j);
            }
       }
       for(int k = 0; k < vec.size(); k++)
           mp[vec[k]]++;

       max = -1;
       min = 1001;
       for(int k = 0; k < con.size(); k++)
           elim[con[k]] = false;
       vec.clear();
       con.clear();
    }

    for(i = 1; i <= p; i++){
        if(elim[i] && (mp[i] > n/2)){
            if(shorto) printf(" ");
            printf("%d",i);
            shorto = true;
        }
    }
    if(shorto) printf("\n");
    else printf("0\n");
    mp.clear();

    return 0;
}
