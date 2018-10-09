#include<bits/stdc++.h>
using namespace std;

string eqls(string s, int len){

    while(len--)
        s+='0';
    return s;
}

int main(){
    long long n;
    int ele1,ele2,fol,last,res;
    string s,s1;
    scanf("%lld",&n);

    while(n--){
        cin>>s>>s1;
        string s2;
        fol = 0;
        int slen = s.length();
        int s1len = s1.length();
        if(slen<s1len)
            s = eqls(s,s1len - slen);
        else if(slen>s1len)
            s1 = eqls(s1,slen - s1len);
        int len = s.length();
        for(int i = 0; i < len; i++){
            ele1 = s[i] - '0';
            ele2 = s1[i] - '0';
            res = ele1 + ele2 + fol;
            fol = res / 10;
            last = res % 10;
            s2 += (last + '0');
        }
        if(fol) s2 += (fol + '0');
        int con = 0;
        while(s2[con] == '0'){
            con++;
        }
        for(int i = con; i < s2.length(); i++)
            printf("%c",s2[i]);
        printf("\n");
    }

    return 0;
}
