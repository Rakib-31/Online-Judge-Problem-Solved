#include<bits/stdc++.h>
using namespace std;

void func(int x, int y){

    double p,q;

    p = y*log(x);
    q = x*log(y);

    double t = abs(p-q);

    if(t<0.00001)
        printf("=\n");
    else if(p>q)
        printf(">\n");
    else if(p<q)
        printf("<\n");


}

int main(){

    int a,b;

    scanf("%d%d",&a,&b);

    func(a,b);

    return 0;
}


