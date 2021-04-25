#include <bits/stdc++.h>
using namespace std;
int firstidx(int arr[],int n,int key){
	if(n==0){
		return -1;
	}
	if(arr[0]==key){
		return 0;
	}
	int i=firstidx(arr+1,n-1,key);
	if(i==-1){
		return -1;
	}
	else{
		return i+1;
	}

}
int main(){
	int n,m;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>m;
	cout<<firstidx(arr,n,m);
}