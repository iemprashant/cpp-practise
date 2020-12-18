#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
	cin>>n;
	int arr[n],parr[n],sarr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	parr[0]=arr[0];
	sarr[n-1]=arr[n-1];
	for(int i=1;i<n;i++){
		parr[i]=max(arr[i],parr[i-1]);
	}
	for(int j=n-2;j>=0;j--){
		sarr[j]=max(arr[j],sarr[j+1]);
	}
	int ans=0;
	for(int i=0;i<n;i++){
		ans+=min(parr[i],sarr[i])-arr[i];
	}
	cout<<ans<<endl;
	}
	return 0;
}