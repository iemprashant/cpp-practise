// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        if (n==0|| W==0){
            return 0;
        }
        int incl,exc;
        incl=exc=0;
        if(wt[n-1]<W){
            incl=val[n-1]+knapSack(W-wt[n-1],wt,val,n-1);
        }
        exc=knapSack(W,wt,val,n-1);
        return max(incl,exc);
    }
};
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends