// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

// function to swap odd and even bits
unsigned int swapBits(unsigned int n)
{
    int only_even= n & 0xAAAAAAAA;
    int only_odd =n & 0x55555555;
    int new_even= only_odd<<1;
    int new_odd=only_even>>1;
    return new_even | new_odd;
	
}

// { Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;//testcases
	while(t--)
	{
		unsigned int n;
		cin>>n;//input n
		
		//calling swapBits() method
		cout << swapBits(n) << endl;
	}
	return 0;
}  // } Driver Code Ends