#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int j,n,i,m,t,c=0;
    cin>>s;
    n=s.size();
    j=n-1;
    m=n/2;
    for(i=0;i<m;i++)
    {
        if(s[i]!=s[j]){
            c++;
            if(c>1){
                t=0;
                break;
            }
        }
        else
            t=1;
            j--;
    }
    if(c==0 && n%2==0)
        printf("NO\n");
    else if(!t)
        printf("NO\n");
        else
            printf("YES\n");
    return 0;
}
