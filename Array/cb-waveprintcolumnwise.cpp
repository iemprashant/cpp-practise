#include <iostream>
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
	for(int i=0;i<n;i++){
		if(i%2==0){
			// print to down
			for(int j=0;j<m;j++){
				cout<<arr[j][i]<<" ";
			}
		}
		else{
			// print to up
			for(int j=m-1;j>0;j--){
				cout<<arr[j][i]<<" ";
			}
		}
	}
}