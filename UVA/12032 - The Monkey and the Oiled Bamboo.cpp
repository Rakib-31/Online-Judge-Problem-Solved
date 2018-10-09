#include <bits/stdc++.h>
using namespace std;

int a[100001];

int main() {
    int t, n, test = 0;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        int i;
        for(i = 1; i <= n; i++)
            scanf("%d", a+i);
        int k = 0, res;
        for(i = 1; i <= n; i++) {
            if(a[i]-a[i-1] > k)
                k = a[i]-a[i-1];
        }
        res = k;
        for(i = 1; i <= n; i++) {
            if(a[i]-a[i-1] == k)
                k--;
            else if(a[i]-a[i-1] > k) {
                res++;
                break;
            }
        }
        printf("Case %d: %d\n", ++test, res);
    }
    return 0;
}
