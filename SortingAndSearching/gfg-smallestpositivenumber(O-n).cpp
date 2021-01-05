// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


int firstmisingnum(int arr[],int n){

    for(int i=0;i<n;i++){
        if(abs(arr[i])-1<n && arr[abs(arr[i])-1]>0){
            arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
        } 
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            return i+1;
        }
    }
    return n+1;
}
int segrerate(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return j;
}
int missingNumber(int arr[], int n) { 
    int firstpositiveindex=segrerate(arr,n);

    return firstmisingnum(arr+firstpositiveindex,(n-firstpositiveindex));
} 
 


// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0; i<n; i++)cin>>arr[i];
        
        cout<<missingNumber(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends