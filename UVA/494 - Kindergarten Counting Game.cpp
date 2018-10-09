#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long num;
    string str,word;

    while(getline(cin,str) && !cin.eof())
    {
        num = 0;
        str += '.';
        for(int i = 0; i < str.size(); i++){
            if((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
                word += str[i];
            else if(word != ""){
                num++;
                word = "";
            }
        }
        printf("%lld\n",num);
    }

    return 0;
}
