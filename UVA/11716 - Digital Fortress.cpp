#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,n,n1;
    string s,s1;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        getline(cin,s);
        n=s.size();
        n1=sqrt(n);
        if(n1*n1!=n)
            printf("INVALID\n");

       else{
            i=0;
            while(i<n1)
            {
                for(j=i;j<n;j+=n1)
                    s1+=s[j];
                i++;
            }
            cout<<s1<<endl;
       }
       s1.clear();
    }
    return 0;
}
