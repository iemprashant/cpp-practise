#include <bits/stdc++.h>
using namespace std;
int comp(string a,string b){
    string string1=a.append(b);
    string string2=b.append(a);
    return string1.compare(string2)> 0 ? 1: 0;

};
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		string s[n];
		for(long long int i=0;i<n;i++){
			cin>>s[i];
		}
        sort(s,s+n,comp);
		for(long long int i=0;i<n;i++){
			cout<<s[i];
		}
		cout<<endl;
	}
}