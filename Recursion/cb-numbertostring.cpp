
#include <bits/stdc++.h>
using namespace std;

string spelling[10] = { "zero", "one", "two",   "three", "four",
            "five", "six", "seven", "eight", "nine" };
            
class Solution{   
public:
    string convertToWords(long n) {
        string s;
        if(n==0){
            return "";
        }
        s=convertToWords(n/10);
        int digit=n%10;
        s=s+spelling[digit]+" ";    
        return s;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        Solution ob;
        auto ans = ob.convertToWords(n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends