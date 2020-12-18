#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n],key;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>key;
	sort(arr,arr+n);
	for(int i=0;i<n-2;i++){
		int fptr=1;
		int bptr=n-1;
		int restsum=key-arr[i];
		while(fptr<bptr){
			if(arr[fptr]+arr[bptr]<restsum){
				fptr++;
			}
			else if(arr[fptr]+arr[bptr]>restsum){
				bptr--;
			}
			else{
				cout<<arr[i]<<", "<<arr[fptr]<<" and "<<arr[bptr]<<endl;
			}
		}
	}
	return 0;
}