#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

#define pi 3.1416

int main(){

    double x1,y1,r1,x2,y2,r2,R,r,r3,s,s0,s1,s3,d,cone1,cone2,area1,area2,value;

    scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&r1,&x2,&y2,&r2);

    //distance between two center
    value = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    if(r1+r2>value){

        //calculates two area
        area1 = pi * r1 * r1;
        area2 = pi * r2 * r2;

        //calculates Semiperimeter
        s = (r1 + r2 + value) / 2;

        //calculates area of two triangle
        d = 2*sqrt(s*(s-r1)*(s-r2)*(s-value));

        //calculates angle cone1 and cone2
        cone1 = 2*(acos((r1*r1+value*value-r2*r2)/(2*r1*value)))*180/pi;
        cone2 = 2*(acos((r2*r2+value*value-r1*r1)/(2*r2*value)))*180/pi;

        //area covered by cone1
        s0 = (area1*cone1/360);

        //area covered by cone2
        s1 = (area2*cone2/360);

        //Intersected area of two given circle
        s3 = s0 + s1 - d;
        printf("%0.3lf\n",s3);
    }

    else printf("%0.000\n");

    return 0;
}
