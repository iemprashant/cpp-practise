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
void mappedstrings(string input , string output, vs &res) {
	if (input.empty()) {
		res.pb(output);
		return;
	}
	int singledigit=stoi(input.substr(0,1));
	mappedstrings(input.substr(1),output+char(singledigit+64),res);
	int doubledigit=stoi(input.substr(0,2));
	if(doubledigit>9 &&  doubledigit<=26){
		mappedstrings(input.substr(2),output+char(doubledigit+64),res);	
	}
}
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		vs res;
		mappedstrings(s, "", res);
		for (auto& it : res)
		{
			cout << it << ' ';
		}

	}
	return 0;
}
