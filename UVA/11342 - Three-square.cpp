#include<bits/stdc++.h>
using namespace std;

#define Boost ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define db double
#define fo freopen("output.txt","w",stdout)
#define in scanf
#define pr printf
#define rep(i, n) for(int i = 0; i < (n); i++)
#define repset(it, st) for(it = st.begin(); it != st.end(); it++)
#define cas(i) cout<<"Case "<<(int)(i)<<": "
#define mpii map<int,int>
#define mpci map<char,int>
#define mpic map<int,char>
#define mpis map<int,string>
#define mpsi map<string,int>
#define mpcc map<char,char>
#define mpss map<string,string>
#define setc set<char>
#define setcit set<char> ::iterator
#define veci vector<int>
#define vecc vector<char>
#define vecs vector<string>

#define MaxN 50000

int main() {
    Boost;
	int T[4][MaxN + 1];
	memset(T, 127, sizeof(T));
	vector<int> v1, v2;
	int oo = T[0][0];
	for (int i = 0; i * i <= MaxN; i++) {
		T[1][i * i] = i;
		v1.push_back(i * i);
	}
	for (int j = 0; j < v1.size(); j++) {
		int f = v1[j];
		for (int i = 0; i * i + f <= MaxN; i++)
			if (T[2][i * i + f] == oo) {
				T[2][i * i + f] = i;
				v2.push_back(i * i + f);
			}
	}
	for (int j = 0; j < v2.size(); j++) {
		int f = v2[j];
		for (int i = 0; i * i + f <= MaxN; i++)
			if (T[3][i * i + f] == oo)
				T[3][i * i + f] = i;
	}

	int t;
	cin>>t;
	while(t--) {
		int n;
		cin >> n;
		if (T[3][n] == oo)
			cout << "-1" << endl;
		else {
			int s[4];
			for (int i = 3; i >= 1; i--) {
				s[i] = T[i][n];
				n -= T[i][n] * T[i][n];
			}
			cout << s[1] << " " << s[2] << " " << s[3] << endl;
		}
	}
	return 0;
}
