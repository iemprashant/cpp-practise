#include <bits/stdc++.h>
using namespace std;
string binary_subset(int n,string a){
	int j=0;
	string ans;
	while(n>0){
		int last_bit=n&1;
		if(last_bit){
			ans+=a[j];
		}
		j++;
		n=n>>1;
	}
	return ans;
}
void printsubsets(string a){
	int n=a.length();
	for(int i=0;i<(1<<n);i++){
		cout<<binary_subset(i,a)<<endl;
	}
}
int main(){
	string a;
	cin>>a;
	printsubsets(a);
}