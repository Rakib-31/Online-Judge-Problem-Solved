#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10001],b[1001],i,n,p=0,p2=0,j;
    int c[1001]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d%d",&a[i],&b[i]);
    for(i=0;i<n;i++){
        if(a[i]!=b[i])
        {
            p=1;
            break;
        }
        else c[i]=a[i];
    }
    sort(c,c+n);
    j=n-1;
    for(i=0;i<n;i++)
    {
        if(a[i]!=c[j])
        {
            p2=1;
            break;
        }
        j--;
    }
    if(p)
        printf("rated\n");
    else if(p2)
        printf("unrated\n");
    else
        printf("maybe\n");

    return 0;
}
