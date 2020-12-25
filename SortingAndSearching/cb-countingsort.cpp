#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int maxnum=0;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]>maxnum){
			maxnum=arr[i];
		}
	}
	int freq[maxnum+1]={0};
	for(int i=0;i<n;i++){
		freq[arr[i]]++;
	}
	for(int i=0;i<maxnum+1;i++){
		if(freq[i]!=0){
			while(freq[i]!=0){
				cout<<i<<" ";
                freq[i]--;
			}
		}
	}
	return 0;
}