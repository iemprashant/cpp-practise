#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.length()-1;i++){
		cout<<s[i];
		cout<<(int)s[i+1]-(int)s[i];
	}
	cout<<s[s.length()-1];
}
//input=>acb
//output=>a2c-1b