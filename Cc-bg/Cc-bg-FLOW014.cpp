#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int hard,carbon,ts;
		cin>>hard>>carbon>>ts;
		int count=0;
		if(hard>50){
			count++;
		}
		if(carbon<0.7){
			count++;
		}
		if (ts>5600){
			count++;
		}
		cout<<count<<endl;
	}
}