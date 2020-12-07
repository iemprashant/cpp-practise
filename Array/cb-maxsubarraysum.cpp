#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int num=0;
		int cs=0;
		int ms=0;
		for(int i=0;i<n;i++){
			cin>>num;
			cs=cs+num;
			if(cs<0){
				cs=0;
			}
			ms=max(cs,ms);
		}
		cout<<ms<<endl;

	}
}