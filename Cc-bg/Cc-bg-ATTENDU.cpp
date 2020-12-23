#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int present=120-n;
		int abscent=0;
		for(int i=0;i<n;i++){
			(s[i]=='1')?present++:abscent++;
		}
		(present>=3*abscent)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
}