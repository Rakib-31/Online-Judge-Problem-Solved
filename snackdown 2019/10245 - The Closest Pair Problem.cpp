#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define db double
#define fo freopen("output.txt","w",stdout)


struct node{
    db x,y;
};

bool comperator(const node &a, const node &b){
    return a.x < b.x;
}

db smallDis(node arr[], int n){
    db sum = 10000;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i].x +  10000 < arr[j].x) break;
            db value = sqrt((arr[j].x - arr[i].x) * (arr[j].x - arr[i].x) + (arr[j].y - arr[i].y) * (arr[j].y - arr[i].y));
            if(value < sum){
                sum = value;
            }
        }
    }
    return sum;
}

int main(){
    //fo;
    int n;
    node arr[10001];
    while(scanf("%d",&n) && n){
        for(int i = 0; i < n; i++){
            scanf("%lf%lf",&arr[i].x, &arr[i].y);
        }
        sort(arr,arr+n,comperator);
        db res = smallDis(arr,n);
        if(res < 10000) printf("%0.4lf\n",res);
        else printf("INFINITY\n");
    }

    return 0;
}
