#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll nodivisiblebyprime(ll num){
	vector <int> primelist{2,3,5,7,11,13,17,19};
	ll subsets=(1<<8)-1;
    ll ans=0;
    for(int i=1;i<=subsets;i++){
	    ll denom= 1ll;
	    ll setbits= __builtin_popcount(i);
	    for(int j=0;j<8;j++)
        {
          if(i & (1<<j)){
                 denom*=primelist[j];
	      }
        }
	    if(setbits&1){
            ans+=num/denom;
        }
        else{
            ans-=num/denom;
        }
    }
    return ans;
}
int main(){
	int t;
	cin>>t;
	ll num;
	while(t--){
		cin>>num;
		cout<<nodivisiblebyprime(num)<<endl;
	}
	return 0;
}