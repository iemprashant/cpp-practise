#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int sl=s.length();
	for(int i=0;i<sl;i++){
		cout<<s[i];
		if(s[i+1]>=65 && s[i+1]<=90){
			cout<<endl;
		}
	}
}