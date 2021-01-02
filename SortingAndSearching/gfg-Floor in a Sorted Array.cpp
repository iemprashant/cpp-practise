// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int findFloor(vector<long long> v, long long n, long long x){
  int s=0;
  int e=n-1;
  long long ans=-1;
  while(s<=e){
  	long long mid=(s+e)/2;
  	if(v[mid]<=x){
  		ans=max(ans,mid);
  		s=mid+1;
  	}
  	else{
  		e=mid-1;
  	}
  }
  return ans;
}


int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    
	    cout << findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
} 