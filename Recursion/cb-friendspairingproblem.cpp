// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    int countFriendsPairings(int n) 
    { 
        long long int mod=1000000000+7;
        long long int dp[n+1];
        for(int i=0;i<=n;i++){
            if(i<=2){
                dp[i]=i%mod;
            }
            else{
                dp[i]=dp[i-1]%mod+((i-1)*dp[i-2])%mod;
            }
        }
        return dp[n]%mod;
    }
};    
 

// { Driver Code Starts.
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout <<ob.countFriendsPairings(n); 
        cout<<endl;
    }
} 
  // } Driver Code Ends