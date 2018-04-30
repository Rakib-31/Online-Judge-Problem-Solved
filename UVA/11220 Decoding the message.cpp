#include<bits/stdc++.h>
using namespace std;

int main(){

    string line,word;
    int i,test,coun = 1,pos = 1,numLine = 0,t = 1;
    bool b,newline = false;

    scanf("%d",&test);
    getchar();
    getchar();

    while(t <= test){
        if(newline) printf("\n");
        newline = true;
        b = true;
        while(1){
            bool check = false;
            int coun = 1,pos = 1;
            getline(cin,line);

            if(line[0] == '\0') break;

            if(b){
                printf("Case #%d:\n",t);
                b = false;
            }

            for(i = 0; i < line.length(); i++){
                if(line[i] != ' '){
                    check = true;
                    if(coun == pos){
                        word += line[i];
                    }
                    coun++;
                }
                else{
                    if(check && coun >= pos+1){
                        pos++;
                        check = false;
                    }
                    coun = 1;
                }
            }
            cout<<word<<endl;
            word.clear();
        }
        t++;
    }

    return 0;
}
