#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,a[100000];

    scanf("%d",&n);

    for(int i = 0; i < n; i++)
        scanf("%d",&a[i]);

    sort(a,a+n);

    int t = (n-1)/2;

    printf("%d\n",a[t]);

    return 0;
}
