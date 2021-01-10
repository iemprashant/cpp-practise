#include <bits/stdc++.h>
using namespace std;
int countsetbits(int n){
	int setbits=0;
	while(n){
		setbits+=n&1;
		n=n>>1;
	}
	return setbits;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<countsetbits(n)<<endl;
	}
}