#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int num;
	cin>>num;
	long long int ans=0;
	long long int mul=1;
	while(num!=0){
		long long int rem=num%10;
		if(rem>=5){
			if(rem==9 && (num/10)==0){
			}
			else{
				rem=9-rem;
			}
		}
		ans+=mul*rem;
		mul*=10;
		num=num/10;
	}
	cout<<ans;
}