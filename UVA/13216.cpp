#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,p;
    scanf("%d",&t);
    string s;
    while(t--)
    {
        cin>>s;
        if(s=="0") printf("1\n");
        else if(s=="1") printf("66\n");
        else
        {
            p=s.size()-1;
            n=s[p]-48;
            n=n%5;
            if(n==1) printf("16\n");
            else if(n==2) printf("56\n");
            else if(n==3) printf("96\n");
            else if(n==4) printf("36\n");
            else printf("76\n");
        }
    }

    return 0;
}

