#include <bits/stdc++.h>
using namespace std;
void caththeif(int a,int b,int k,int n){
    
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int x,y,k,n;
		cin>>x>>y>>k>>n;
		long long int dif=max(x,y)-min(x,y);
        (dif%(2*k)==0)?cout<<"Yes"<<endl:cout<<"No"<<endl;
	}
}