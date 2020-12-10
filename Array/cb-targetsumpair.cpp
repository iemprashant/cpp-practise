#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	int k;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>k;
	sort(arr,arr+n);
	
	int s=0
	int e=n-1;
	while(s<e){
		if(arr[s]+arr[e]>k){
			e--;
		}
		else if(arr[s]+arr[e]<k){
		  s++;
		}
		
		else if(arr[s]+arr[e]==k){
			cout<<arr[s]<<" and "<<arr[e]<<endl;
			s++;
			e--;
		}
	}	
}