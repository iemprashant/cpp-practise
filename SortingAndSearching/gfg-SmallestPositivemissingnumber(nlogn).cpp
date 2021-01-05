// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n) { 
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int firstpositive=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            firstpositive=i;
            break;
        }
    }
    cout<<firstpositive<<" "<<arr[firstpositive]<<endl;
    if(arr[firstpositive]!=1){
        return 1;
    }
    for(int i=firstpositive;i<n-1;i++){
        if(arr[i]+1!=arr[i+1] && arr[i]!=arr[i+1]){
            return arr[i]+1;
        }

    }

    return arr[n-1]+1;
} 

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
}   