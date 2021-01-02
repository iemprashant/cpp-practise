// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


int peakElement(int a[], int n)
{
	int l=0,h=n-1;
  	int mid;
  	while(l<=h)
  		{
	      mid=l+(h-l)/2;
	      if((mid==0||a[mid]>=a[mid-1])&&(mid==n-1||a[mid]>=a[mid+1]))
	        return mid;
	      else if(mid>0&&a[mid-1]>a[mid])
	      h=mid-1;
	      else
	      l=mid+1;
		}
  return -1;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		bool f=0;
		int A = peakElement(a,n);
		if(n==1)
		f=1;
		else
		if(A==0 and a[0]>=a[1])
		f=1;
		else if(A==n-1 and a[n-1]>=a[n-2])
		f=1;
		else if(a[A] >=a[A+1] and a[A]>= a[A-1])
		f=1;
		else
		f=0;
		
		cout<<f<<endl;
		
	}

	return 0;
}  // } Driver Code Ends