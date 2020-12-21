#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int res[1000];
	int ressize=1;
	res[0]=1;
	for(int x=2;x<=n;x++){
		int carry=0;
		for(int i=0;i<ressize;i++){
			int prod=res[i]*x+carry;
			res[i]=prod%10;
			carry=prod/10;
		}
		while(carry){
			res[ressize]=carry%10;
			carry=carry/10;
			ressize++;
		}
	}
	for(int i=ressize-1;i>=0;i--){
		cout<<res[i];
	}
}