#include<bits/stdc++.h>
using namespace std;

int n,value[10002];

void squrroot(){
    int min,coun;
    for(int i = 5; i < 10003; i++){
        int sq = sqrt(i);
        coun = 1000000;
        for(int j = sq; j > 0; j--){
            min = value[i - j*j] + 1;
            if(coun > min) coun = min;
        }
        value[i] = coun;
    }
}

int main(){
    ios_base::sync_with_stdio(false);

    value[1] = 1;
    value[2] = 2;
    value[3] = 3;
    value[4] = 1;

    squrroot();

    int test;

    cin>> test;

    while(test--){
        cin>>n;
        cout<<value[n]<<endl;
    }

    return 0;
}
