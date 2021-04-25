#include <bits/stdc++.h>
using namespace std;
bool IsSorted(int arr[],int n){
	if(n==1 || n==0){
		return true;
	}
	if(arr[n-2]>arr[n-1]){
		return false;
	}
	else{
		return IsSorted(arr,n-1);
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	IsSorted(arr,n)?cout<<"true":cout<<"false";
}