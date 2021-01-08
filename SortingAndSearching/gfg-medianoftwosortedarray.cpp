
#include <bits/stdc++.h>
using namespace std;

int findMedian(int *, int , int *, int);

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int arr[n];
	    int brr[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> brr[i];
	    }
	    
	    if(n < m)
	        cout << findMedian(arr, n, brr, m) << endl;
	   else
	        cout << findMedian(brr, m, arr, n) << endl;
	    
	}

}// } Driver Code Ends


//User function template for C++

// arr : given array with size n 
// brr : given array with size m
int findMedian(int arr[], int n, int brr[], int m){
	int s=0;
	int e=n;
	while(s<=e){
		int mid1=(s+e)/2;
		int mid2=(n+m+1)/2-mid1;
		int min1=(mid1==n)?INT_MAX:arr[mid1];
		int max1=(mid1==0)?INT_MIN:arr[mid1-1];
		int min2=(mid2==m)?INT_MAX:brr[mid2];
		int max2=(mid2==0)?INT_MIN:brr[mid2-1];
		if(max1<=min2 && max2<=min1){
			if((n+m)%2 == 0){
				return (double)(max(max1,max2)+min(min1,min2))/2;
			}
			else{
				return max(max1,max2);
			}
		}
		else if(min1<max2){
			s=mid1+1;
		}
		else{
			e=mid1-1;
		}
	}
	return -1;
}