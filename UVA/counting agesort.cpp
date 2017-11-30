#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,i;
    while(scanf("%d",&n)==1 && n)
    {
        bool t=true;
        int aux[101]={};

        for(i=0;i<n;i++){
            scanf("%d",&p);
            aux[p]++;
        }

        for(i=1;i<=100;i++){
            while(aux[i]--)
            {
                if(t) t=false;
                else printf(" ");
                printf("%d",i);
            }
        }
        printf("\n");
    }

    return 0;
}

