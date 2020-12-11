	#include <bits/stdc++.h>
	using namespace std;
	int main(){
		int t;
		cin>>t;
		while(t--){
			int n,g;
			cin>>n>>g;
	        int arr[n];
	        int r=0;
	        for (int i=0;i<n;i++){
	            cin>>arr[i];
	            if(arr[i]<=9 ||arr[i]>=80){
	                r++;
	            }
	        }

			cout<<ceil((double)r/g)+ceil((double)(n-r)/g)<<endl;
		}
	}
 