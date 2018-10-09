#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,c = 0,c1 = 0;
    char t;
    bool b = true;

    scanf("%d",&n);
    getchar();

    for(int i = 0; i < n ; i++){

        scanf("%c",&t);

        if(n == 1 && t == '0')
            b = false;

        if(t == '1')
            c++;
        else c = 0;

        if(c == 2)
        {
            b = false;
        }

        if(t == '0')
            c1++;
        else c1 = 0;
        if((c1 == 3) || (c1 == 2 && (i == n-1 || i == 1)))
            b = false;
    }
    if(b)
        printf("Yes\n");
    else printf("No\n");

    return 0;
}
