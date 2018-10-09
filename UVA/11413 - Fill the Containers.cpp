#include<bits/stdc++.h>
using namespace std;

bool fillcon(const vector<int> &ves,int m,int C)
{
    int cont = 1;
    int cap = C;
    for (int i = 0; i < ves.size(); ++i)
    {
        if (ves[i] > C)
            return false;

        if (ves[i] > cap)
        {
            if (cont == m)
                return false;
            ++cont;
            cap = C;
        }
        cap -= ves[i];
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int n, m;
    while (cin >> n >> m)
    {
        vector<int> vessels(n);
        for (int i = 0; i < n; ++i)
            cin >> vessels[i];

        int L = 1, U = 1000000000, C = 0;
        while (L <= U)
        {
            int mid = (L + U) / 2;
            if (fillcon(vessels, m, mid))
            {
                C = mid;
                U = mid - 1;
            }
            else
                L = mid + 1;
        }
        cout << C << endl;
    }
    return 0;
}
