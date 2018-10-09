#include<bits/stdc++.h>
using namespace std;

string m;

int fun(int n,int p,int v){

    if(n == p) return v;
    swap(s[n],s[n+1]);
    v++;
    fun(n+1,p,v);
}

int main(){

    string s,m;

    int p,count,count1;
    bool fl = false;
    bool bl = false;

    cin>>s;
    m = s;

    int n = s.length();

    int zfind = s.find("0");

    if(zfind >= 0 && zfind < 18){
        int five = 20,zero2 = 20;
        int count = fun(zfind,n-1,0);
        s[zero] = 'o';

        int ffind = s.find("5");
        if(ffind >= 0 && zfind < 18){
            five = fun(zfind,n-2,0);
        }
        zfind = s.find("0");
        if(zfind >= 0 && zfind < 18){
            if(n>2){
                zero2 = fun(zfind,n-2,0);
            }
        }
        if(five<20 || zero2<20){
            fl = true;
            count += min(five,zero2);
        }
    }

    int ffind = m.find("5");

    if(ffind >= 0 && ffind < 18){
        int two = 20,seven = 20;
        count1 = fun(ffind,n-1,0);

        int tfind = m.find("2");
        if(tfind >= 0 && tfind < 18){
            two = fun(tfind,n-2,0);
        }
        int sfind = m.find("7");
        if(sfind >= 0 && sfind < 18){
            seven = fun(sfind,n-2,0);
        }
        if(two<20 || seven<20){
            bl = true;
            count1 += min(five,zero2);
        }
    }

    if(bl || fl){
        printf("%d\n",min(count,count1));
    }

    else printf("-1\n");


    return 0;
}
