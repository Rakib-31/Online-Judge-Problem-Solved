#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    long long m,x;

    while((cin>>m>>x) && (m || x)){
        if(m == 1 ||x == 100 || x == 0)
            cout<<"Not found"<<endl;

        else{
            long long con = ((m - 1) * 100) / (100 - x);

            if ((m-1)*100 % (100-x) == 0)
                 con--;

            if (con < m)
                        cout << "Not found" << endl;
            else
                cout << con << endl;
        }
    }

    return 0;
}
