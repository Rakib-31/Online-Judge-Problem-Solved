#include<bits/stdc++.h>
using namespace std;

int main(){

    int i,n,a[200000],coun = 0;
    double sum = 0;

    scanf("%d",&n);
    for(i = 0; i < n; i++){
        scanf("%d",&a[i]);
        sum += a[i];
    }
    sum /= 2;

    for(i = 0; i < n; i++){
        coun += a[i];
        if(coun >= sum)
            break;
    }

    printf("%d\n",i+1);


    return 0;
}
