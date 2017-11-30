#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s,s1;
    int i,n,c,c1;

    while(cin>>n){

    c=0,c1=0;

    cin>>s;

    for(i=0;i<n;i++)
    {
        getline(cin,s1,'-');
        getchar();
        cin>>s1;
        if(s1==s)
            c++;
        else
            c1++;

    }

    if(c>c1 || c==c1)
        cout<<"home"<<endl;

    else
        cout<<"contest"<<endl;
    }

    return 0;
}
