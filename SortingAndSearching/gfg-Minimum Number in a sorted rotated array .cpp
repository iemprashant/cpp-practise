// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minNumber(int arr[], int low, int high)
{
    if(arr[0]<arr[high]){
        return arr[0];
    }
    while(low<=high){
        
        int mid=(low+high)/2;
        if(arr[mid]<arr[mid-1]){

            return arr[mid];
        }
        else if(arr[mid]>arr[mid+1]){
            return arr[mid+1];
        }
        else if(arr[mid]>arr[high]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

// { Driver Code Starts.


int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;++i)
            cin>>a[i];      
        cout << minNumber(a,0,n-1) << endl;
    }
    return 0;
}  // } Driver Code Ends