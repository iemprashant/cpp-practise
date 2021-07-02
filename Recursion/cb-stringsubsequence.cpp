#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod = 1e9 + 7 ;
#define vi vector<int>
#define vs vector < string >
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>

void printallsubsequence(string input,string output, vector<string> &res){
	if(input.empty()){
		res.push_back(output);
		return;
	}
	
	printallsubsequence(input.substr(1),output,res);
	printallsubsequence(input.substr(1),output+input[0],res);
};
void stringsubsequences(string s){
	vs res;
	printallsubsequence(s,"",res);
	int n=res.size();
	for(int i=0;i<n;i++){
		cout<<res[i]<<" ";
	}
	cout<<endl<<n;

}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stringsubsequences(s);
}
return 0;
}