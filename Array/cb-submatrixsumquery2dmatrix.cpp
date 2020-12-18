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
	for(int i=0;i<m;i++){
		for(int j=1;j<n;j++){
			arr[i][j]+=arr[i][j-1];		
		}
	}
	//making prefix matric column wise
	for(int i=0;i<n;i++){
		for(int j=1;j<m;j++){
			arr[j][i]+=arr[j-1][i];		
		}
	}
	//taking input of top left vertix cordiante , and bottom right vertix coordinate
	int topleftrow,topleftcol,bottomrightrow,bottomrightcol;
	cin>>topleftrow>>topleftcol>>bottomrightrow>>bottomrightcol;
	int sum=0;
	sum=arr[bottomrightrow][bottomrightcol]+arr[topleftrow-1][topleftcol-1]-arr[topleftrow-1][bottomrightcol]-arr[bottomrightrow][topleftcol-1];
	
	cout<<sum;
}