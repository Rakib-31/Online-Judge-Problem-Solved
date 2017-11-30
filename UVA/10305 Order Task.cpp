#include<bits/stdc++.h>
using namespace std;

int arrn[100],n;
int bin_search(int j)
{
    int p;
    for(int i=0;i<n;i++)
    {
        if(j==arrn[i])
        {
            p=i;
            break;
        }
    }
    return p;
}
int main()
{
    int m,i,j,a,b,p,q;
    while(1)
    {
        scanf("%d%d",&n,&m);
        if(n==0 && m==0)
            break;

        for(i=0;i<n;i++)
            arrn[i]=i+1;

        for(i=0;i<m;i++)
        {
            scanf("%d%d",&a,&b);

            p=bin_search(a);
            q=bin_search(b);

            if(q<p){
                arrn[q]=a;
                arrn[p]=b;
            }
        }
        for(i=0;i<n;i++){
            printf("%d",arrn[i]);
            if(i!=n-1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
