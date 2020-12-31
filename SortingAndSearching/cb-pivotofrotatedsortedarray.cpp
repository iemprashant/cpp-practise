#include <bits/stdc++.h>
using namespace std;
int pivotofarr(int arr[],int start,int end){
	if(start>end){
		return -1;
	}
	else if (start==end){
		return start;
	}
	int mid=(start+end)/2;
    	if(mid<end && arr[mid]>arr[mid+1]){
		return mid;
	}
	if(mid > start && arr[mid]<arr[mid-1]){
		return mid-1;
	}
	if(arr[start]>=arr[mid]){
		return pivotofarr(arr,start,mid-1);
	}
	return pivotofarr(arr,mid+1,end);
}
int main(){
	int n;
	cin>>n;
	int arr[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int pivot=pivotofarr(arr,0,n-1);
	cout<<pivot;
}