#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int arr[26]={0};
	for(int i=0;i<s.length();i++){
		arr[s[i]-'a']++;
	}
	int maxf=arr[0];
	int index=0;
	for(int i=0;i<26;i++){
		if(arr[i]>maxf){
			maxf=arr[i];
			index=i;
		}
	}
	cout<<char(97+index);
}