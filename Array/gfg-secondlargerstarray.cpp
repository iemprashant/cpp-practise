
#include<bits/stdc++.h>
using namespace std;
class Solution
{
   public:
    int print2largest(int arr[], int arr_size)
    {
        int max=INT_MIN;
        int Smax=INT_MIN;
        for(int i=0;i<arr_size;i++){
        	if(arr[i]>max){
        		Smax=max;
        		max=arr[i];

        	}
        	if(arr[i]>Smax && arr[i]<max){
        		Smax=arr[i];
        	}
        }
        return (Smax==INT_MIN)?-1:Smax;
    }

};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.print2largest(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}