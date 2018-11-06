#include<bits/stdc++.h>
using namespace std;

int main(){

    int t,n,arrA[100001],arrB[100001],res[100001];
    scanf("%d",&t);

    while(t--){
        bool check = true;
        scanf("%d",&n);
        for(int i = 0; i < n; i++)
            scanf("%d",&arrA[i]);
        for(int i = 0; i < n; i++)
            scanf("%d",&arrB[i]);

        for(int i = 0; i < n; i++)
            res[i] = arrB[i] - arrA[i];

        for(int i = 0 ; i < n - 2; i++){
            res[i + 1] -= 2 * res[i];
            res[i + 2] -= 3 * res[i];
            res[i] = 0;
            if(res[i] < 0 || res[i + 1] < 0 || res[i + 2] < 0)
            {
                check = false;
                break;
            }
            else if(res[i] > 0) i = i - 1;
            else if(res[i + 1] > 0) i = i;
            else if(res[i + 2] > 0) i = i  + 1;
            else i = i + 2;
        }
        if(check && !res[n-3] && !res[n-2] && !res[n-1])
            printf("TAK\n");
        else printf("NIE\n");
    }

    return 0;
}
