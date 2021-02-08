#include <bits/stdc++.h>
using namespace std;

class Solution {
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
                for(long long j=1ll*i*i;j<=n; j+=i){//CORRECTION 1: SAY N WAS 10^6 SO I*I CAN OVERFLOW
                    isPrime[j]=0;                }
            }
        }
        return listofprime;
    }
    vector<int> getPrimes(int N) {
        vector <int> twoprime;
        vector<int> primelist=sieveOfEratosthenes(N);
        //if number is odd and one prime number is 2 thn it can be wwiten in pair
        if(binary_search(primelist.begin(),primelist.end(),N-2)){
            twoprime.push_back(2);
            twoprime.push_back(N-2);
            return twoprime;
        }
        //else for everyodd number it is not possible
        if (N%2 != 0) {
            twoprime.push_back(-1);
            twoprime.push_back(-1);
            return twoprime;
        }
        //we will check for all even numbers 
        int m=primelist.size();
        for(int i=0;i<m/2;i++){
            int dif= N - primelist[i];
            if(binary_search(primelist.begin(),primelist.end(),dif)){
                twoprime.push_back(primelist[i]);
                twoprime.push_back(dif);
                return twoprime;
            }
        }
        return {-1,-1}; //CORRECTION 2 
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        vector<int> ptr = ob.getPrimes(N);
        cout << ptr[0]<<" "<<ptr[1] << endl;
    }
    return 0;
} 