#include <bits/stdc++.h>
using namespace std;
int lastelement(int arr[],int vidx,int key,int n){
	if(vidx==n){
		return -1;
	}
	int rr= lastelement(arr,vidx+1,key,n);
	lastelement(arr,vidx+1,key,n);
	if(arr[vidx]==key && rr==-1){
		return vidx
;	}
	return rr;
}
int main(){
	int n,m;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>m;
	cout<<lastelement(arr,0,m,n);
}