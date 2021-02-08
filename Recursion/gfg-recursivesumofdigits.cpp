
#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution{
	public:
    ll sumdigit(ll N){
        return (N>0)? N%10 + sumdigit(N/10): 0;
     }
	ll digits(ll N){
        if(N<10){
            return N;
        }
        else{
            return digits(sumdigit(N));
        }
	}
	int SumofDigits(int A, int B)
	{
	    return digits(pow(A,B));
	}
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int A, B;
		cin >> A >> B;
		Solution ob;
		int ans = ob.SumofDigits(A, B);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends