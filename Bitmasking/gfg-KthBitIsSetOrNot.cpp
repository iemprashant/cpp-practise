
#include <bits/stdc++.h>
using namespace std;

int checkKthBit(long long n, long long k){
    int ans=false;
    if((n & (1<<k))>0){
        ans=1;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;//input n
        int k;
        cin>>k;//bit number k
        
        if(checkKthBit(n, k))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}  // } Driver Code Ends