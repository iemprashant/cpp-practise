#include <bits/stdc++.h>
using namespace std;

int main (){
	int n ;
	cin>>n;
	string s= to_string(n);
	int l=s.length();
	(l<4)?cout<<l:cout<<"More than 3 digits";
	return 0;
}