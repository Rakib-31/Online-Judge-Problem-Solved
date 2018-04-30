#include<bits/stdc++.h>
using namespace std;

int main(){
    double x1,y1,x2,y2,R,c;
    double x,y,r;

    scanf("%lf%lf%lf%lf%lf",&R,&x1,&y1,&x2,&y2);

    double t1 = R+x1;
    double t2 = R+y1;

    if((t1 < x2))
        cout<<x1<<" "<<y1<<" "<<R<<endl;
       // printf("%0.1lf %0.1lf %0.1lf\n",x1,y1,R);
    else{
        if(x2<y2) c=y2;
        else c=x2;
        x = (2*R-sqrt(2*c*c))/2;
        cout<<x;
    }

    return 0;
}

