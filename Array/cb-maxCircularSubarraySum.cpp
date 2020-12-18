#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		int sum=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			sum+=arr[i];
		}
		int currentmin=arr[0],minsum=arr[0];
		int currentmax=arr[0],maxsum=arr[0];
		for(int i=1;i<n;i++){
			currentmin=min(currentmin+arr[i],arr[i]);
			minsum=min(minsum,currentmin);
			currentmax=max(currentmax+arr[i],arr[i]);
			maxsum=max(currentmax,maxsum);
		}
		cout<<max(maxsum,sum-minsum);
	}
}