#include<bits/stdc++.h>
using namespace std;

int findIndex(int arr[], int n, int key)
{
 int index = -1;

   for(int i=0; i<n; i++)
   {
      if(arr[i]==key)
      {
        return i;
      }
   }
}

int main(){

    ios_base::sync_with_stdio(false);

    int t,ar[100005],n,k;

    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i = 0; i < n; i++){
            cin>>ar[i];
        }
        sort(ar,ar+n);
        int x = ar[n-k];
        int res = n - findIndex(ar,n,x);
        cout<<res<<endl;
    }

    return 0;
}
