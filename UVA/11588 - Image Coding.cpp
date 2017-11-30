#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,r,c,m,n,p=1,s,i,j,count,arr[27],target,result,max;
    char str[4000],d;
    scanf("%d",&t);
    while(p<=t)
    {
        scanf("%d%d%d%d",&r,&c,&m,&n);
        s=r*c;
        for(i=0;i<s;i++)
            scanf(" %c",&str[i]);
        sort(str,str+s);
        d=str[0];
        j=0;
        count=1;
        for(i=1;i<s;i++)
        {
            if(str[i]!=d)
            {
                arr[j]=count;
                j++;
                count=1;
                d=str[i];
            }
            else count++;
        }
        arr[j]=count;
        sort(arr,arr+j+1);
        target=arr[j];
        max=target;
        for(i=j-1;i>=0;i--)
        {
            if(arr[i]==max)
                target+=arr[i];
            else break;
        }
        result=(target*m)+(s-target)*n;
        printf("Case %d: %d\n",p,result);
        p++;
    }
    return 0;
}

