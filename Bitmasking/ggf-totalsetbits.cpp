#include <bits/stdc++.h>
using namespace std;
int totalsetbit(int n){
	n++;//to componsate 0, as binary start from 0;
	int count=n/2;//for 0th position set bits
	// now count for 1st positoin ie 2^1
	int powerOf2=2;
	while(powerOf2<=n){
		int totalpairs=n/powerOf2;
		int setbitpairs=totalpairs/2;
		int setbits=setbitpairs*powerOf2;
		count+=setbits;
		if (totalpairs%2 ==1){
			count+=n%powerOf2;
		}
		powerOf2 <<= 1;
	}
	return count;

}
int main(){
	int n;
	cin>>n;
	cout<<totalsetbit(n);
}