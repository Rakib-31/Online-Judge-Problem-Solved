#include<bits/stdc++.h>
using namespace std;

string str;
stack <char> st2;
map <char, int> mp;


void pop_push(char ch){

    while(ch != '('){
        str += ch;
        st2.pop();
        ch = st2.top();
    }
    st2.pop();
}

void call_stack(char ch){
    while(mp[ch] <= mp[st2.top()]){
        str += st2.top();
        st2.pop();
    }
    st2.push(ch);
}

int main(){

    int n;
    char ch;
    bool con = false;

    mp['-'] = 1;
    mp['+'] = 1;
    mp['*'] = 2;
    mp['/'] = 2;
    mp['$'] = 0;
    st2.push('$');

    scanf("%d\n",&n);

    while(n--){

        if(con) printf("\n");
        con = true;
        while((scanf("%c",&ch) != EOF) && (ch != '\n')){
            getchar();
            if(mp[ch] == 1 || mp[ch] == 2){
                if(mp[ch] <= mp[st2.top()]){
                call_stack(ch);
                }
                else st2.push(ch);
            }
            else if(ch == '('){
                st2.push('(');
            }
            else if(ch == ')'){
                pop_push(st2.top());
            }
            else str += ch;
        }
        while(st2.top() != '$'){
            str += st2.top();
            st2.pop();
        }
        printf("%s\n",str.c_str());
        str = "";
    }

    return 0;
}
