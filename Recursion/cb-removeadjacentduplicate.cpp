 #include <bits/stdc++.h>
using namespace std;
string removeduplicate(string s,int n){
	if(n<2){
		return s;
	}
	string sub=s.substr(1);
	string ros=removeduplicate(sub,n-1);
	if(s[0]==ros[0]){
		return s[0] +string("*")+ros; 
	}
	else{
		return s[0]+ros;
	}
};
int main(){
	string s;
	cin>>s;
	int n=s.length();
	cout<<removeduplicate(s,n);
}