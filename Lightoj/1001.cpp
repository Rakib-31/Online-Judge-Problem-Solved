#include<bits/stdc++.h>
using namespace std;

void fun(){

    int a,b,c,sum=0;
    cin>>a>>b>>c;

    if(a+b <= c) sum = c - (a+b) + 1;
    else if(b+c <= a) sum =  a - (c+b) + 1;
    else if(a+c <= b) sum =  b - (c+a) + 1;
    cout<<sum<<endl;
}

int main(){

    fun();

    return 0;
}


