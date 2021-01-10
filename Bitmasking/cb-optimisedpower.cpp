#include <bits/stdc++.h>
using namespace std;
long long optimsedpower(int n,int m){
	long long ans=1;
	while(m){
		int last_bit= m&1;
		if(last_bit){
			ans*=n;
		}
		m=m>>1;
		n=n*n;
	}
	return  ans;
}
int main(){
	int n,m;
	cin>>n>>m;
	cout<<optimsedpower(n,m);
}