#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int a=max(n,m);
		int b=min(n,m);
		cout<<a-min(b+k,a)<<endl;
		
	}
}