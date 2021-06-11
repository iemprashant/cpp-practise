// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

vector<string> AllParenthesis(int n) ;
class Solution
{
    public:
    void allbrackets( vector<string> &v,string s, int n, int open,int close){
        if(s.length()==2*n){v.push_back(s);};
        if(open<n){allbrackets(v,s+'(',n,open+1,close);};
        if(close<open){allbrackets(v,s+')',n,open,close+1);};
    }
    
    vector<string> AllParenthesis(int n) 
    {
        vector <string> v;
        allbrackets(v,"",n,0,0);
        return v;
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
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 
  // } Driver Code Ends