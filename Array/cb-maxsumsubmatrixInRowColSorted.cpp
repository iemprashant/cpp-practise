#include <bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	int arr[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	// sufix matrix row-wise
	for(int i=0;i<m;i++){
		for(int j=n-2;j>=0;j--){
			arr[i][j]+=arr[i][j+1];
		}
	}
	// sufix matrix col-wise
	for(int i=n-1;i>=0;i--){
		for(int j=m-2;j>=0;j--){
			arr[j][i]+=arr[j+1][i];
		}
	}
	int max_sum=INT_MIN;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(max_sum<arr[i][j]){
				max_sum=arr[i][j];
			}
		}
	}
	cout<<max_sum;
}