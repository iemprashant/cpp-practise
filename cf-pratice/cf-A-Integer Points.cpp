#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll p,peven,podd;
		while(p--){
			ll num;
			cin>>num;
			if(num%2==0){
				peven++;
			}
			else{
				podd--;
			}
		}
		ll q,qeven,qodd;
		while(q--){
			ll num;
			cin>>num;
			if(num%2==0){
				qeven++;
			}
			else{
				qodd--;
			}
		}
		cout<<qodd*podd+peven*qeven<<endl;
	}
}