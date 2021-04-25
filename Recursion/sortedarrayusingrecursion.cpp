#include <bits/stdc++.h>
using namespace std;
bool issorted(int *arr,int n){
	if(n==1 || n==0){
		return true;
	}
	if(arr[0]<=arr[1] && issorted){
		return issorted(arr+1,n-1);
	}
	else {
		return false;
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	issorted(arr,n)?cout<<"true":cout<<"false";
}