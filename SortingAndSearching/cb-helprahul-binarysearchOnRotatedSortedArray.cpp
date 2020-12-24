#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int start,int end,int key){
	while(start<=end){
		int mid=(start+end)/2;
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]<key){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
	}
	return -1;
}
int findpivot( int arr[],int n){
	int i=1;
	int maxindex=-1;
	while(arr[i]>arr[i-1]){
		i++;
		maxindex++;
	}
	return maxindex;
}
int binarysearchonrotatedarray(int arr[],int key,int n){
	int pivot=findpivot(arr,n);
	if (pivot == -1) 
        return binarySearch(arr, 0, n - 1, key);
	if (arr[pivot] == key) 
        return pivot;
	if(key>arr[0]){
		return binarySearch(arr,0,pivot-1,key);
	}
	return binarySearch(arr,pivot+1,n-1,key);
}
int main(){
	int n,key;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>key;
	cout<<binarysearchonrotatedarray(arr,key,n);
	
}