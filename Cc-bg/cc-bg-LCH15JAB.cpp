#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.length();

		int ans=0;
		int arr[26]={0};
		for(int i=0;i<n;i++){
			arr[s[i]-'a']++;
		}
		for (int i=0;i<26;i++){
			if(2*arr[i] == n){
				ans=1;
				break;
			}
		}
		ans?cout<<"YES"<<endl:cout<<"NO"<<endl;
		
	}
	return 0;
}