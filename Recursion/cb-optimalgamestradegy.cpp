#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod = 1e9 + 7 ;
#define vi vector<int>
#define vs vector < string >
#define vll vector<ll>
#define vvi vector < vi >
#define pb push_back
#define pii pair<int,int>
#define pll pair<long long, long long>
#define rep(i,n) for (ll i = 0; i < n; ++i)
#define REP(i,k,n) for (ll i = k; i <= n; ++i)
#define REPR(i,k,n) for (ll i = k; i >= n; --i)

ll optimalgame(ll i,ll j,ll arr[]){
	if(i>j){
		return 0;
	}
	ll firstpick=arr[i]+min(optimalgame(i+2,j,arr),optimalgame(i+1,j-1,arr));
	ll lastpick=arr[j]+min(optimalgame(i,j-2,arr),optimalgame(i+1,j-1,arr));
	return max(firstpick,lastpick);
};
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll arr[n];
		rep(i,n){
			cin>>arr[i];
		}
		cout<<optimalgame(0,n-1,arr);
		
}
return 0;
}