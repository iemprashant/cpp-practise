#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll squareroot(ll n){
	if (n == 0 || n == 1)  
       return n; 
	ll s=1;
	ll e=n;
    ll ans=-1;
	while(s<=e){
		ll mid=(s+e)/2;
		if(mid*mid>n){
			e=mid-1;
		}
		else if(mid*mid<n){
            ans=mid;
			s=mid+1;
		}
		else{
			return mid;
		}
	}
	return ans;
}
int main(){
	ll n;
	cin>>n;
	cout<<squareroot(n);
	return 0;
}