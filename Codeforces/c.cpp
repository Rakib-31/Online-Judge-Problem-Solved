#include<bits/stdc++.h>
using namespace std;

long long even;
bool prime[100000];
int arr[1000001],kl;

void SieveOfEratosthenes()
{
    bool prime[100001];
    memset(prime, true, sizeof(prime));

    int l = 4;
    while(l<=100001){
        prime[l]==false;
        l+=2;
    }

    for (int p=3; p*p<=100001; p+=2)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=100001; i += p)
                prime[i] = false;
        }
    }

    int i = 1;
    arr[0] = 2;
    for (int p=3; p<=100001; p+=2)
       if (prime[p])
              arr[i++] = p;

    kl=i;
}

long long odd(long long x,long long y){
    long long od;
    if(x%2==0 && y%2==0){
        od=(y-x)/2;
        even=od+1;
    }
    else if((x%2!=0 && y%2==0) || (x%2==0 && y%2!=0)){
        od=(y-x)/2+1;
        even = od;
    }
    else{
        even=(y-x)/2;
        od=even+1;
    }
    return od;
}

long long sq(long long x, long long y){
    long long low = sqrt(x);
    if(low*low!=x) low++;
    long long hi = sqrt(y);
    if(low>hi) hi++;

    return odd(low,hi);
}

long long pof(long x,long long y){
    long long coun = 0, coun1=0;
    while(x){
        x/=2;
        coun++;
    }
    while(y){
        y/=2;
        coun1++;
    }
    return coun1-coun;
}

long long sqr(long x,long long y){
    long long coun=0;
    for(long long i=1;i<=kl;i++){
        long long val = arr[i];
        val=val*val*2;
        if(val>y) break;
        while(val<=y){
            if(val>=x)
                coun++;
            val*=2;
        //cout<<"kkk"<<endl;
        }
        cout<<coun<<endl;
    }
    return coun;
}

int main(){
    ios_base::sync_with_stdio(false);
    SieveOfEratosthenes();
    int t,p=1;
    long long ans;
    long long x,y,total;
    cin>>t;
    while(p<=t){
        cin>>x>>y;
        total=y-x+1;
        ans=sq(x,y)+pof(x,y)+sqr(x,y);
        cout<<"Case "<<p<<": "<<ans<<endl;
        p++;
    }
    return 0;
}
