#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int max=INT_MIN;
	while(n--)
	{
		int num;
		cin>>num;
		if(num>max)
		{
			max=num;
		}

	}
	cout<<max;
}