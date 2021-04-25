#include <bits/stdc++.h>
using namespace std;
long long tilingways(long long n,long long m){
	if(n<=m-1){
		return 1;
	}
	return tilingways(n-1,m) + tilingways(n-m+1,m);
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
	cin>>n>>m;
	int modulo=1000000007;
	cout<<tilingways(n,m) % modulo<<endl;
	}
}