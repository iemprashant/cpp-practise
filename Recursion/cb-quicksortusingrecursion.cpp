#include <bits/stdc++.h>
using namespace std;
int  partiton(int arr[],int s, int e){
	int i=s-1;
	int j=s;
	int pivot=arr[e];
	for(;j<=e-1;){
		if(arr[j]<=pivot){
			i=i+1;
			swap(arr[i],arr[j]);
		}
		j++;
	}
	swap(arr[i+1],arr[e]);
	return i+1;
}
void quick_sort(int arr[],int s,int e){
	if(s>=e){
		return;
	}
	int p=partiton(arr,s,e);
	quick_sort(arr,s,p-1);
	quick_sort(arr,p+1,e);
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	quick_sort(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}