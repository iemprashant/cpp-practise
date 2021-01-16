#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	return b==0?a:gcd(b,a%b);
}
int lcm(int n1,int n2,int gcd){
	return (n1*n2)/gcd;
}
int main(){
	int n1,n2;
	cin>>n1>>n2;
	cout<<lcm(n1,n2,gcd(n1,n2));
}