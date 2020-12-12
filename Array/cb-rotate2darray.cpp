#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[][1000],int n){
	for(int i=0;i<n;i++){
		reverse(arr[i],arr[i]+n);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i<j){
		   		swap(arr[i][j],arr[j][i]);
			}
		}
	}
}
 int main(){
 	int n;
 	cin>>n;
 	int arr[1000][1000];
 	for(int i=0;i<n;i++){
 		for(int j=0;j<n;j++){
 			cin>>arr[i][j];
 		}
 	}
 	rotate(arr,n);
 	for(int i=0;i<n;i++){
 		for(int j=0;j<n;j++){
 			cout<<arr[i][j]<<" ";
 		}
 		cout<<endl;
 	}
 }          