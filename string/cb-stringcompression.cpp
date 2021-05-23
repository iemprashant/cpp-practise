#include <bits/stdc++.h>
using namespace std;
string encode(string s){
	if(s.length()==0){
		return "";
	}
	int i=1;
	while(i<s.length() && s[i]==s[0]){
		i++;
	}
	string s1=s.substr(i);
	string charCnt=to_string(i);
	return s[0]+charCnt+encode(s1);
	}
	int main(){
	string s;
	cin>>s;
	cout<<encode(s);
}