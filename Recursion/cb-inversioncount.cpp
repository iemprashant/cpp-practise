// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
long long int merge(long long arr[],long long int s,long long int e){
    long long int mid=(s+e)/2;
    long long int i=s;
    long long int j=mid+1;
    long long int k=s;
    long long int temp[e+1];
    long long int cnt=0; //cross inversion
    while(i<=mid &&j<=e){
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            k++;
            i++;
        }
        else{
            temp[k++]=arr[j++];
            cnt+=mid-i+1;
        }
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=e){
        temp[k++]=arr[j++];
    }
    for(int i=s;i<=e;i++){
        arr[i]=temp[i];
    }
    return cnt;
};
long long int inversion(long long arr[],long long int s, long long int e){
    if(s>=e){
        return 0;
    }
    //merge sort
    long long int mid=(s+e)/2;
    long long int x=inversion(arr,s,mid);
    long long int y=inversion(arr,mid+1,e);
    long long int z=merge(arr,s,e);
    return x+y+z;

}
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
        return inversion(arr,0,N-1);
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends