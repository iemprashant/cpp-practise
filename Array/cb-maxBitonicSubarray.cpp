#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n],inc[n],dec[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		inc[0]=1;
		dec[n-1]=1;
		for(int i=1;i<n;i++){
			inc[i]=(arr[i]>=arr[i-1])?inc[i-1]+1:1;
		}
		for(int j=n-2;j>=0;j--){
			dec[j]=(arr[j]>=arr[j+1])?dec[j+1]+1:1;
		}
		int maxlength=inc[0]+dec[0]-1;
		for(int i=1;i<n;i++){
			maxlength=max(maxlength,inc[i]+dec[i]-1);
		}
        cout<<maxlength<<endl;
	}
    cout<<endl;
}