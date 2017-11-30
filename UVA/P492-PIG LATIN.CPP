#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    string s,s1;
    char c;
    while(getline(cin,s))
    {
        n=s.size();
        s+='.';
        for(i=0;i<n;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                for(j=i;j<=n;j++)
                {
                    if(isalpha(s[j]))
                        s1+=s[j];
                    else
                    {
                        s1+="ay";
                        cout<<s1;
                        if(j<n)
                            cout<<s[j];
                        s1.clear();
                        break;
                    }
                }
                i=j;
            }
            else if(isalpha(s[i]) && s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U')
            {
                c=s[i];
                for(j=i+1;j<=n;j++)
                {
                    if(isalpha(s[j]))
                        s1+=s[j];
                    else
                    {
                        s1+=c;
                        s1+="ay";
                        cout<<s1;
                        if(j<n)
                            cout<<s[j];
                        s1.clear();
                        break;
                    }
                }
                i=j;
            }
            else
                cout<<s[i];
        }
        printf("\n");
    }
    return 0;
}
