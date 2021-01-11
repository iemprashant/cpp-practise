#include <bits/stdc++.h>
using namespace std;
int maxxorpair(int L,int R){
	int LXR=L^R;
	int msb_pos=0;
	while(LXR){
		msb_pos++;
		LXR=LXR>>1;
	}
	int maxxor=0;
	int base=1; //2^0;
	while(msb_pos--){
		maxxor+=base;
		base<<=1;
	}
	return maxxor;
}
int main(){
	int x,y;
	cin>>x>>y;
	cout<<maxxorpair(x,y);
}