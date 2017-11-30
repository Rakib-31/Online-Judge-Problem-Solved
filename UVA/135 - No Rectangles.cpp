#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,i,j,p,p1,l,result;
    bool r=true;
    while(scanf("%d",&k)==1)
    {
        if(r==true) r=false;
        else printf("\n");
        p=2;
        p1=k-1;
        for(i=1;i<=k;i++)
        {
            printf("1");
            for(j=1;j<=p1;j++){
                printf(" ");
                printf("%d",p);
                p++;
            }
            printf("\n");
        }
        for(i=0;i<p1;i++)
        {
            for(j=0;j<p1;j++)
            {
                printf("%d",i+2);
                for(l=0;l<p1;l++)
                {
                    printf(" ");
                    result=k+1+(l*p1)+(j+l*i)%p1;
                    printf("%d",result);
                }
                printf("\n");
            }
        }
    }
    return 0;
}
