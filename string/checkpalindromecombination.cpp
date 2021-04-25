#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int arr[26]={0};
	for(int i=0;i<s.length();i++){
		arr[s[i]-'A']++;
	}
	int flag=-1;
	for(int i=0;i<26;i++){
		if(arr[i]&1){
			flag++;
		}
	}
	flag>0?cout<<"NO SOLUTION":cout<<"PALINDROME";
}