#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int count[64]={0};
	int num;
	for(int i=0;i<n;i++){
		cin>>num;
		int j=0;
		while(num>0){
			count[j]+=num&1;
			num=num>>1;
			j++; 
		}
	}
	int ans=0;
	int base=1;
	for(int i=0;i<64;i++){
		count[i]=count[i]%3;
		ans+=base*count[i];
		base=base<<1;
	}
	cout<<ans<<endl;
}