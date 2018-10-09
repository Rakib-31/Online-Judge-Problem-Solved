#include<bits/stdc++.h>
using namespace std;

int p1[100000000],p2[100000000];

int binarySearch(int first,int last,int pos){

    mid = (first + last) / 2;
    if(p1[mid] > pos){
        binarySearch(first,mid - 1,pos);
    }
        return mid;

}

int main(){

    int n,m,st,el,v;
    int num;
    int q;
    int x1,y1,x2,y2;
    bool exist[100000];

    scanf("%d%d%d%d%d",&n,&m,&st,&el,&v);
    for(int i = 0; i < st; i++)
        scanf("%d%d%d",&p1[i]);

    for(int i = 0; i < el; i++)
        scanf("%d%d%d",&p2[i]);

    scanf("%d",&num);

    while(q--){
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        for(int i = y2; i > 0; i++){
            int pos  = binarySearch(0,,y1);
        }
    }

    return 0;
}

