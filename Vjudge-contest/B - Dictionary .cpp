#include<bits/stdc++.h>
using namespace std;

int main(){

    string word[1000],sting,str;
    int i = 0,k,l;
    while(1){
        getline(cin,word[i]);
        if(word[i] == "#")
            break;
        sort(word[i].begin(),word[i].end());
        i++;
    }

    while(1){
        int coun = 0;
        getline(cin,str);
        if(str == "#") break;
        int t = str.length();
        for(int j = 0; j < t; j++){
            if(str[j] != ' ')
                sting += str[j];
        }

        sort(sting.begin(),sting.end());

        for(int s = 0; s < i; s++){
            bool con = true;

            int m = 0;
            for(k = 0; k < word[s].length(); k++){
                for(l = m; l < sting.length(); l++){
                    if(word[s][k] == sting[l]){
                        m = l + 1;
                        break;
                    }
                     else{
                        if(l == sting.length() - 1){
                            //k = word[s].length();
                            con = false;
                        }
                     }
                }
                if(l == sting.length()-1 && k != word[s].length()-1)
                    break;
            }
            if(con && !(k < word[s].length()-1)){
                coun++;
            }
        }
        printf("%d\n",coun);
        sting.clear();
    }

    return 0;
}
