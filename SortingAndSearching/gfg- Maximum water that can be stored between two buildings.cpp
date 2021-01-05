#include <bits/stdc++.h>
using namespace std;
int maxwater(int arr[],int n){
	int i=0;
	int j=n-1;
	int ans=0;
	while(i<j){
		if(arr[i]<arr[j]){
			ans=max(ans,(j-i-1)*arr[i]);
			i++;
		}
		else{
			ans=max(ans,(j-i-1)*arr[j]);
			j--;
		}
	}
	return ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cout<<maxwater(arr,n)<<endl;
	}
}