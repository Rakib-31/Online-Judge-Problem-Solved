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

#define maxN 1000000
int val[maxN], Maxp;
bool Exist[maxN], cmpl;

bool Check() {
   if (!Exist[1]) return false;
   for (int i=2; i<=Maxp; i+=2) {
      bool Child = Exist[i] || Exist[i+1];
      if (Child && !Exist[i/2]) return false;
   }
   return true;
}

int main() {
//   freopen("122.inp", "r", stdin); freopen("122.out", "w", stdout);
   int a, len;
   char s[300], path[300];
   while (scanf("%s", &s)!=EOF) {
      Maxp = 1; cmpl = true;
      memset(Exist, false, maxN);
      while (1) {
         if (strcmp(s, "()")==0) break;
         sscanf(s, "(%d,%s)", &a, &path);
         len = strlen(path);
         int p = 1;
         for(int i = 0;i <= len-2; i++) {
            p *= 2;
            if (path[i]=='R') p++;
         }
         if (Exist[p]) cmpl = false;
         Exist[p] = true;
         val[p] = a;
         Maxp = max(p, Maxp);
         scanf("%s", &s);
      }
      if (!cmpl || !Check()) puts("not complete");
      else {
         printf("%d", val[1]);
         for(int i = 2; i <= Maxp; i++)
            if (Exist[i]) printf(" %d", val[i]);
         printf("\n");
      }
   }
   return 0;
}
