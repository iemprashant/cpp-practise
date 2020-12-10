#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i) 
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long arr[n];
		rep(i,n){
			cin>>arr[i];
		}
		int min=*min_element(arr, arr + n);
		cout<<(n-1)*min<<endl;

	}
}