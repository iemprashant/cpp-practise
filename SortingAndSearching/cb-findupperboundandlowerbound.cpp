#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int q;
    cin>>q;
    cout<<q<<endl;
	while(q--){
		int num;
		cin>>num;
        auto lb=(lower_bound(arr,arr+n,num)-arr);
        auto ub=(upper_bound(arr,arr+n,num)-arr);
        if(lb==n){
            lb=-1;
        }
        if(ub==n){
            ub=-1;
        }
		cout<<lb<<" "<<ub<<endl;
	}
}