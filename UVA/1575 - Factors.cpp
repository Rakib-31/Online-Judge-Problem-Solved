#include<bits/stdc++.h>
using namespace std;

int k=0,a[1000000];
double t1=1;

void process(double s){

    //cout<<s<<endl;
    int i=1;
    while(1){
        t1*=i;
        if(t1>s){
           t1/=i;
           a[k]=i-1;
           k++;
           process(s);
           return;
        }
        else if(t1==s){
            a[k]=i;
            return;
        }
        else i++;
    }
}

int main(){

    double fact=1,num,t=1,s;
    int i=0;

    scanf("%lf",&num);
    cout<<num<<endl;
    while(t<num){
        i++;
        t=pow(2,i);
    }
    if(!i) i=1;
    for(int j=1;j<=i;j++){
        fact*=j;
    }
    if(fact<num){
        i++;
        fact*=i;
    }
    s=fact/num;
    cout<<i<<endl<<s<<endl;
    process(s);
    for(int j=0;j<=k;j++){
        cout<<a[j]<<endl;
    }
    return 0;
}
