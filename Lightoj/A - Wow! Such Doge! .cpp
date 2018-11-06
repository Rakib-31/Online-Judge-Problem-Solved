#include <bits/stdc++.h>
using namespace std;

int find_substring(string str, string pattern) {
	if( str.size() == 0 || pattern.size() == 0)
		return -1;
	int failure[pattern.size()];
	std::fill( failure, failure+pattern.size(), -1);

	for(int r=1, l=-1; r<pattern.size(); r++) {

		while( l != -1 && pattern[l+1] != pattern[r])
			l = failure[l];
		if( pattern[l+1] == pattern[r])
			failure[r] = ++l;
	}
	int count = 0;
	int tail = -1;
	for(int i=0; i<str.size(); i++) {

		while( tail != -1 && str[i] != pattern[tail+1])
			tail = failure[tail];

		if( str[i] == pattern[tail+1])
			tail++;

		if( tail == pattern.size()-1)
			count++;
	}

	return count;
}

int main() {

    string s,str="";

    while(getline(cin,s)){
        str += s;
    }

    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }

	int t = find_substring(str, "DOGE");
	printf("%d\n",t);

	return 0;
}
