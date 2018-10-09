#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,t1[300],t2[300],t3[300],max = -1,max1 = -1,max2 = -1;
    string s1,s2,s3;
    scanf("%d",&n);

    cin>>s1;
    cin>>s2;
    cin>>s3;

    int d = s1.size();

    for(int i = 0; i < d; i++){
        t1[s1[i]]++;
        t2[s2[i]]++;
        t3[s3[i]]++;
        if(t1[s1[i]]>max)
            max = t1[s1[i]];
        if(t2[s2[i]]>max1)
            max1 = t2[s2[i]];
        if(t3[s3[i]]>max2)
            max2 = t3[s3[i]];
    }
    if(max == d && n == 1)
        max = d - 1;
    else max = min(max+n,d);
    if(max1 == d && n == 1)
        max1 = d - 1;
    else max1 = min(max1+n,d);
    if(max2 == d && n == 1)
        max2 = d - 1;
    else max2 = min(max2+n,d);

    if(max>max1 && max>max2)
        printf("\n");
    else if(max1>max && max1>max2)
        printf("\n");
    else if(max2>max && max2>max1)
        printf("\n");
    else
        printf("Draw\n");

    return 0;
}

