#include <bits/stdc++.h>
using namespace std;

int countDigit(int sum){
    int res = 0;

    while(sum){
        res += sum % 10;
        sum /= 10;
    }
    if(res>9)
        return countDigit(res);
    return res;
}

int calculateDigit(string str){
    int sum = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i]>='a' && str[i]<='z'){
            sum += str[i] - 96;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            sum += str[i] - 64;
        }
    }
    return sum;
}

int main(){

    string str, str2;
    char a = '%';
    double res;

    while(getline(cin,str) && getline(cin,str2))
    {
        int sum = calculateDigit(str);
        int sum2 = calculateDigit(str2);

        int digit = countDigit(sum);
        int digit2 = countDigit(sum2);

        if(digit2 < digit)
            res = (digit2 / (double) digit) * 100;
        else res = (digit / (double) digit2) * 100;

        printf("%0.2lf %c\n",res,a);
    }

    return 0;
}


