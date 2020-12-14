#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	cin.get();
	char a[1000];
	char largeststr[1000];
	int l=0;
	for(int i=0;i<n;i++){
		cin>>a;
		if(strlen(a)>l){
			l=strlen(a);
			strcpy(largeststr,a);
		}
	}
	cout<<largeststr<<" "<<l;
}