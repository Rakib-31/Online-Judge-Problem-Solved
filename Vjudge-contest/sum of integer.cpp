#include <bits/stdc++.h>
using namespace std;

long long fun(long long N)
{
    long long count = 0;
    for (long long i = 1; i * (i + 1) < 2 * N; i++)
    {
        double j = (1.0 * N-(i * (i + 1)) / 2) / (i + 1);
        if (j-(int)j == 0.0)
            count++;
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int n,t;
    cin>>n;
    long long N;

    for(int i = 0; i < n; i++){
        cin>>N;
        long long con = fun(N);
        cout<<"Case "<<i+1<<": "<<con<<endl;
    }
    return 0;
}

