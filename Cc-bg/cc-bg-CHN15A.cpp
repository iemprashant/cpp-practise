#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n];
		int ans=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			arr[i]+=k;
			if(arr[i]%7==0){
				ans++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}