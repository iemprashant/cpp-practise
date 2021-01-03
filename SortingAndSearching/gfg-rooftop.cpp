// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int maxStep(int arr[], int n){

   int count=0;
   int ans=0;
   for(int i=0;i<n-1;i++){
       if(arr[i]<arr[i+1]){
         count++;  
       }
       else{
           ans=max(ans,count);
           count=0;
       }
   }
   return max(ans,count);
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    
	    cout << maxStep(a, n) << endl;
	}
	return 0;
}