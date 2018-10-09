#include<bits/stdc++.h>
using namespace std;

bool prime[20000004];

int arr[1000000];

void sieve(){
    memset(prime, true, sizeof(prime));

    int l = 4;
    while(l<=20000000){
        prime[l]==false;
        l+=2;
    }

    for (int p=3; p*p<=20000000; p+=2)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=20000000; i += p)
                prime[i] = false;
        }
    }

    int i = 0;
    for (int p=3; p<=20000000; p+=2)
       if (prime[p] && prime[p+2])
              arr[i++] = p;

}

int main(){

    sieve();

    int v;

    while(scanf("%d",&v) != EOF){
        printf("(%d, %d)\n",arr[v-1],arr[v-1]+2);
    }

    return 0;
}
