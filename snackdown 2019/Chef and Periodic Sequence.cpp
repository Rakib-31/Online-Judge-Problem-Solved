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

int main(){

    int t,n,k;

    in("%d",&t);
    while(t--){
        int a[100001],b[100001],c[100001];
        int big = -2;
        bool ck = true;
        in("%d",&n);
        int j = 0;
        rep(i,n){
            in("%d",&a[i]);
            if(a[i] != -1){
                b[j] = a[i];
                c[j] = i;
                j++;
            }
            if(a[i] > big) big = a[i];
        }
        bool check = true,flag = false;


        if(j){
            rep(i,j-1){
                if(b[i+1] > b[i]){
                    int tmp = b[i+1] - b[i] - 1;
                    int val = c[i+1] - c[i] - 1;
                    int mod = val % b[i+1];
                    int res = val/b[i+1];
                    if(res > 0 && mod == tmp){
                        if(i+1 != j-1){
                            continue;
                        }
                        else if(!flag){
                            ck = false;
                            pr("inf\n");
                            break;
                        }
                    }

                    else{
                        ck = false;
                        pr("impossible\n");
                        break;
                    }
                }
                else{
                    int tmp = c[i+1] - c[i] - 1;
                    if((b[i+1] - 1) <= tmp){
                        k = tmp - b[i+1] + 1;
                        if((b[i] + k) % big == 0) k = big;
                        else k += b[i];
                        if(flag){
                            if(big != k){
                                ck = false;
                                pr("impossible\n");
                                break;
                            }
                        }
                        if(k>0)
                            big = k;
                            //cout<<k<<endl;
                        flag = true;
                    }
                    else{
                        pr("impossible\n");
                        break;
                    }
                }
            }
            if(ck) pr("%d\n",big);
        }
        else pr("inf\n");
    }

    return 0;
}
