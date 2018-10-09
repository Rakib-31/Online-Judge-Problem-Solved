#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n[15],value,max = -1,m=0;


    for(int i = 0; i < 14; i++){
        scanf("%I64d",&n[i]);
    }

    for(int i = 0; i < 14; i++){
        int con = n[i];
        int coun = 0;
        int x = i;
        if(i == 13)
            x = -1;
        for(int j = x+1; j < 14; j++){
            if(con){
                con--;
                value = n[j]+1;
            }
            else{
                value = n[j];
            }
            if(value%2==0)
                m+=value;
            coun++;
            if(coun == 13){
                if(m>max)
                    max = m;
                break;
            }
            else if(j == 13 && coun<13)
                j=-1;

        }
        m=0;
    }

    printf("%I64d\n",max);

    return 0;
}

