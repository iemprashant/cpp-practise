#include <bits/stdc++.h>
using namespace std;
void merge (int arr[],int s,int e){

	int mid=(s+e)/2;
	int i=s;
	int j=mid+1;
	int k=s;
	int temp[e+1];
	while(i<=mid && j<=e){
		if(arr[i]<arr[j]){
			temp[k++]=arr[i++];
		}
		else{
			temp[k++]=arr[j++];
		}
	}
	while(i<=mid){
		temp[k++]=arr[i++];
	}
	while(j<=e){
		temp[k++]=arr[j++];
	}
	for(int i=s;i<=e;i++){
		arr[i]=temp[i];
	}
}
void merge_sort_rec(int arr[],int s,int e){
	if(s>=e){
		return;
	}
	int mid=(s+e)/2;
	merge_sort_rec(arr,s,mid);
	merge_sort_rec(arr,mid+1,e);
	merge(arr,s,e);
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for (auto i = 0; i<n; i++){
		cin>>arr[i];
	}
	merge_sort_rec(arr,0,n-1);
	for (auto i = 0; i<n; ++i)
        cout << arr[i] << " ";
}