#include <bits/stdc++.h>
using namespace std;
int decimaltobinary(int n){
	int base=1;
	int ans=0;
	while(n>0){
		int lastbit= (n&1);
		ans+=lastbit*base;
		base=base*10;
		n=n>>1;
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	cout<<decimaltobinary(n);
}