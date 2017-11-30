#include<bits/stdc++.h>
#include<sstream>
#include <iomanip>
#include<cmath>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    unordered_map <string,int> mp;
    int i,k,t,n,a[15],b[15],sum;
    string c,s,result;
    ostringstream convert;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sum=0;
        for(i=0;i<n;i++){
            ostringstream convert;
            scanf("%d",&a[i]);
            sum+=a[i];
            convert<<a[i];
            s+=convert.str();
        }
        mp[s]++;
        while(1)
        {
            if(!sum)
            {
                printf("ZERO\n");
                break;
            }
            sum=0;
            k=a[0];
            for(i=0;i<n-1;i++)
            {
                ostringstream convert;
                b[i]=abs(a[i+1]-a[i]);
                a[i]=b[i];
                sum+=b[i];
                convert<<a[i];
                result+=convert.str();
            }
            ostringstream convert;
            b[n-1]=abs(a[n-1]-k);
            a[n-1]=b[n-1];
            sum+=b[n-1];
            convert<<a[n-1];
            result+=convert.str();

            mp[result]++;
            if(mp[result]>1){
                printf("LOOP\n");
                break;
            }
            result.clear();
        }
        mp.clear();
        s.clear();
        result.clear();
    }
    return 0;
}
