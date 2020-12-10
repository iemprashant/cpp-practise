#include <bits/stdc++.h>
using  namespace std;
 int main(){
 	int n,m;
 	cin>>n>>m;
 	int arr[n][m];
 	int k=1;
 	for(int i=0;i<n;i++){
 		for(int j=0;j<m;j++){
 			arr[i][j]=k;
 			k++;
 		}
 	}
 	for(int i=0;i<n;i++){
 		for(int j=0;j<m;j++){
 			cout<<arr[i][j]<<" ";
 		}
 		cout<<endl;
 	}
 	int sr=0,er=n-1,sc=0,ec=m-1;
 	while(sr <= er && sc<=ec){
	 	for(int i=sc;i<=ec;i++){
	 		cout<<arr[sr][i]<<" ";
	 	}
	 	sr++;
	 	for(int j=sr;j<=er;j++){
	 		cout<<arr[j][ec]<<" ";
	 	}
	 	ec--;
	 	if(sc<ec){
	 		for(int i=ec;i>=sc;i--){
	 			cout<<arr[er][i]<<" ";
	 		}
	 		er--;
	 	}
	 	if(sr<er){
	 		for(int i=er;i>=sr;i--){
	 			cout<<arr[i][sc]<<" ";
	 		}
		 	sc++;
	 	}
 	}
 	

 }