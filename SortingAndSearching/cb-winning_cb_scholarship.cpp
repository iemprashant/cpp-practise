#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool isposible(ll student,ll coupons,ll neededcoupon,ll payingcoupon,ll teststudent){
	if(teststudent*neededcoupon<=coupons+(student-teststudent)*payingcoupon){
		return true;
	}
	else{
		return false;
	}
}
ll noofcbscholarship(ll student,ll coupons,ll neededcoupon,ll payingcoupon){
	ll s=0;
	ll e=student;
	ll ans=INT_MIN;
	while(s<=e){
		ll mid=(s+e)/2;
		if(isposible(student,coupons,neededcoupon,payingcoupon,mid)){
			ans=max(ans,mid);
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
	return ans;
}
int main(){
	ll n,m,x,y;
	cin>>n>>m>>x>>y;
	cout<<noofcbscholarship(n,m,x,y);

}