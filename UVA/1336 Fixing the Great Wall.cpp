#include<bits/stdc++.h>
using namespace std;

struct data{

    int a,b,c;
};

/*bool cmp(const data& a, const data& b){
    cout<<a.a<<"    "<<b.a<<endl;
    if(a.c == b.c){
        t = (abs(a.a - t) < abs(b.a - t))?a.a:b.a;
        cout<<t<<endl;
        return abs(a.a - t) < abs(b.a - t);
    }
    t = (a.c > b.c)? a.a:b.a;
    cout<<t<<endl;

    return a.c > b.c;
}*/

int main(){

    int n,t,x,cost = 0,wait = 0,time,sum = 0;
    scanf("%d%d%d",&n,&x,&t);
    time = t;
    data p[1000];
    for(int i = 0; i < n; i++){
        scanf("%d%d%d",&p[i].a,&p[i].b,&p[i].c);
    }

    //sort(p,p+n,cmp);
    data temp;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(p[i].c < p[j].c){
                temp = p[i];
                //cout<<temp.a<<endl;
                p[i] = p[j];
                p[j] = temp;
            }
            else if(p[i].c == p[j].c){
                if(abs(p[i].a - t) > abs(p[j].a - t)){
                    temp = p[i];
                    //cout<<temp.a<<endl;
                    p[i] = p[j];
                    p[j] = temp;
                }
            }
        }
        t = p[i].a;
        //cout<<"t: "<<t<<endl;

    }

    //cout<<"after sorting"<<endl;

    //for(int i = 0; i < n; i++){
      //  cout<<p[i].a<<" "<<p[i].b<<" "<<p[i].c<<endl;
    //}

    t = time;

    for(int i = 0; i < n; i++){
        wait += abs(p[i].a - t);
        sum += p[i].b + wait * p[i].c;
        t = p[i].a;
    }

    printf("%d\n",sum);



    return 0;
}
