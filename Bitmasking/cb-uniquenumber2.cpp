#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	int xor_of_unique=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		xor_of_unique=xor_of_unique^arr[i];
	}
	int temp=xor_of_unique;
	int pos=0;
	while((temp&1)!=1){
		pos++;
		temp=temp>>1;
	}
	//check numbers from arr with set bit at pos 
	int mask=(1<<pos);
	int a=0,b=0;
	for(int i=0;i<n;i++){
		if(arr[i]&mask){
			a=a^arr[i];
		}
	}
	b=a^xor_of_unique;
	(a>b)?cout<<b<<" "<<a:cout<<a<<" "<<b;
}
