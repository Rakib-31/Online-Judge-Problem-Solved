#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c,c1,a;
    int i,j,t,p=1;
    bool r=true;

    scanf("%d",&t);
    while(p<=t)
    {
        bool b=true;
        for(i=0;i<5;i++)
        {
             c='.';
             c1='.';

            for(j=0;j<5;j++)
            {
                scanf(" %c",&a);
                if(a=='<')
                    c='<';
                else if(a=='|')
                {
                    if(c=='<') b=false;
                    else c1='|';
                }
                else if(a=='>')
                {
                    if(c1=='|') b=false;
                }

            }
            getchar();
        }
        if(b) printf("Case %d: Thik Ball\n",p);
        else printf("Case %d: No Ball\n",p);
        p++;
    }

    return 0;
}
