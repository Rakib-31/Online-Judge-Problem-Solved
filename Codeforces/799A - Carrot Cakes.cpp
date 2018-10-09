#include<bits/stdc++.h>
using namespace std;
int main()
{
   float n,t,k,d,tm1,tm2;
    int num1,num2,tm3,tm4;
    scanf("%f%f%f%f",&n,&t,&k,&d);
    tm1=n/k;
    tm4=tm1;
    if(tm4!=tm1)
        tm4++;
    tm4=t*tm4;
     num1=d*k/t;
     if(num1>=n)
        printf("NO\n");
     else{
         num2=n-num1;
         tm2=num2/(2*k);
         tm3=tm2;
         if(tm3!=tm2)
            tm3++;
         tm3=tm3*t;
         tm3=d+tm3;
         if(tm3<tm4)
             printf("YES\n");
         else printf("NO\n");
    }
    return 0;
}
