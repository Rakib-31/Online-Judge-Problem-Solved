#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,s,i,j,p,p1,count,count1,ind,take;
    char c,a[6],cell[100][100],s1[100000];
    map <char,int> mp;
    bool t;

    a[1]='u';
    a[2]='r';
    a[3]='d';
    a[4]='l';

    mp['u']=1;
    mp['r']=2;
    mp['d']=3;
    mp['l']=4;

    while(1)
    {
        scanf("%d%d%d",&n,&m,&s);
        if(!n && !m && !s) break;
        count1=0;

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf(" %c",&cell[i][j]);
                if(cell[i][j]=='N'){
                    p=i;
                    p1=j;
                    c='u';
                }
                else if(cell[i][j]=='S'){
                    p=i;
                    p1=j;
                    c='d';
                }
                else if(cell[i][j]=='L'){
                    p=i;
                    p1=j;
                    c='r';
                }
                else if(cell[i][j]=='O'){
                    p=i;
                    p1=j;
                    c='l';
                }
            }
        }
        scanf("%s",s1);
        for(i=0;i<s;i++)
        {
            if(s1[i]!='F')
            {
                count=0;
                t=false;
                while(s1[i]!='F')
                {
                    if(s1[i]=='D') count++;
                    else count--;
                    i++;
                    if(i>s){
                        t=true;
                        break;
                    }
                }
                if(t) break;
                if(count<0){
                    ind=((-1)*count) & 3;
                    ind*=-1;
                }
                else ind=count & 3;
                take=mp[c]+ind;
                if(take==-1) take=3;
                else if(take==-2) take=2;
                take=take & 3;
                if(take==0) take=4;
                c=a[take];
            }
            if(c=='u')
            {
                if(cell[p-1][p1]!='#' && p-1>=0){
                    p-=1;
                    if(cell[p][p1]=='*')
                    {
                        count1++;
                        cell[p][p1]='.';
                    }
                }
            }
            else if(c=='d')
            {
                if(cell[p+1][p1]!='#' && p+1<=n-1){
                    p+=1;
                    if(cell[p][p1]=='*')
                    {
                        count1++;
                        cell[p][p1]='.';
                    }
                }
            }
            else if(c=='r')
            {
                if(cell[p][p1+1]!='#' && p1+1<=m-1){
                    p1+=1;
                    if(cell[p][p1]=='*')
                    {
                        count1++;
                        cell[p][p1]='.';
                    }
                }
            }
            else if(c=='l')
            {
                if(cell[p][p1-1]!='#' && p1-1>=0){
                    p1-=1;
                    if(cell[p][p1]=='*')
                    {
                        count1++;
                        cell[p][p1]='.';
                    }
                }
            }
        }
        printf("%d\n",count1);
    }
    return 0;
}
