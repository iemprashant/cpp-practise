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
string MoveAllXAtEnd(string input,string output,int xnum) {
	if(input.empty()){
		while(xnum--){
			output+="x";
		}
		return output;
	}
	if(input.substr(0,1)=="x"){
		return MoveAllXAtEnd(input.substr(1),output,++xnum);
	}
	return MoveAllXAtEnd(input.substr(1),output+input.substr(0,1),xnum);

}
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		cout << MoveAllXAtEnd(s, "",0);
	}
	return 0;
}