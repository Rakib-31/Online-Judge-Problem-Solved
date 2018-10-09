#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,a;

    while(scanf("%d",&n) && n != 0){
        priority_queue<int, vector<int>, greater<int> > q;
        int sum = 0,res = 0;
        while(n--){
            scanf("%d",&a);
            q.push(a);
        }
        while(q.size()>1){
            sum = q.top();
            q.pop();
            sum += q.top();
            q.pop();
            res += sum;
            q.push(sum);
        }
        printf("%d\n",res);
    }

    return 0;
}
