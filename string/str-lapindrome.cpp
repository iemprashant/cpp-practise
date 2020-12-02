#include <bits/stdc++.h>
using namespace std;
void islapindrome(string str){
	int length=str.length();
	int l1=length/2;
	int l2=(length%2==0)? l1:l1+1;
	string s1,s2;
	s1=str.substr(0,l1);
	s2=str.substr(l2,l1);
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());
	(s1==s2)?cout<<"YES":cout<<"NO";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		islapindrome(str);
		cout<<endl;
	}
	return 0;
}
