#include <bits/stdc++.h>
using namespace std;
int stringtonumber(string s,int n){
	int x=(int)(s[n-1]-'0');
	if(n==1){
	return x;
	}
	return stringtonumber(s,n-1)*10+x;
}
int main(){
	string s;
	cin>>s;
	int n=s.length();
	cout<<stringtonumber(s,n);
	return 0;
}