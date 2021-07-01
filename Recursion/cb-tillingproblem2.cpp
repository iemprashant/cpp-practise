#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod = 1e9 + 7 ;
ll tilingproblem(ll n,ll m){
	std::vector<ll> dp(n+1,0);
	
	dp[0]=1ll;
	for(ll i=1;i<=n;i++){
		dp[i]=dp[i-1];
		dp[i]+=(i-m)>=0?dp[i-m]:0;
		dp[i]%=mod;
	}
	return dp[n];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		cout<<tilingproblem(n,m)<<endl;
	}
}