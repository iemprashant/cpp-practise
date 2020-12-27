#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(int arr[],int s,int e){
        if(s>e){
            return true;
        }
        if(arr[s]!=arr[e]){
            return false;
        }

       bool value= ispalindrome(arr,s+1,e-1);
		
		
return value;	
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int s=0;
	int e=n-1;
	ispalindrome(arr,s,e)?cout<<"true":cout<<"false";
}