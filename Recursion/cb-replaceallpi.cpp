#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod = 1e9 + 7 ;
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
string replaceallpi(string s) {
	if (s.length() <= 1) {
		return s;
	}
	else if (s.substr(0, 2) == "pi") {
		return "3.14" + replaceallpi(s.substr(2));
	}
	return s[0] + replaceallpi(s.substr(1));
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		cout << replaceallpi(s) << endl;
	}
	return 0;
}