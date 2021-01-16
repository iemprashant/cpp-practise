// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 
class Solution
{
public:
    vector<int> sieveOfEratosthenes(int n)
    {
        vector <int> listofprime;
        vector <int> isPrime(n+1,0);
        if( n==0 || n==1){
            return listofprime;
        }
        listofprime.push_back(2);
        for(int i=3;i<=n;i+=2){
            isPrime[i]=1;
        }
        for(int i=3;i<=n;i+=2){
            if(isPrime[i]){
                listofprime.push_back(i);
                for(int j=i*i;j<=n; j+=i){
                    isPrime[j]=0;                }
            }
        }
        return listofprime;
    }
};

// { Driver Code Starts.
int main()
{
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(1000005);
        cout<<primes[N];
    return 0;
}  // } Driver Code Ends