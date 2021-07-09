#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod = 1e9 + 7 ;
#define vi vector<int>
#define vs vector < string >
#define vll vector<ll>
#define vvi vector < vi >
#define pb push_back
#define pii pair<int,int>
#define pll pair<long long, long long>
#define rep(i,n) for (ll i = 0; i < n; ++i)
#define REP(i,k,n) for (ll i = k; i <= n; ++i)
#define REPR(i,k,n) for (ll i = k; i >= n; --i

vector<string> table = {" ", ".+@$", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

vector<string> searchIn = {
    "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
    "utkarsh", "divyam", "vidhi", "sparsh", "akku"};
void phonekeypad(string input,string output){
	if(input.size()==0){
		for(string ss:searchIn){
			if(ss.find(output)!=ss.npos ){
				cout<<ss<<endl;
			}
		}
	}
	char ch=input[0];
	string tableindx=table[ch-'0'];
	int n=tableindx.length();
	rep(i,n){
		phonekeypad(input.substr(1),output+tableindx[i]);
	}
	return ;

};
int main(){
	int t;
	cin>>t;
	while(t--){
		string input;
		cin>>input;
		string output;
		phonekeypad(input,output);
}
return 0;
}