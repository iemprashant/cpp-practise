#include<bits/stdc++.h>
using namespace std;
pair<int,int> twoRepeated (int arr[], int N)
{
    pair<int,int> result;
    int flag=0;
	int i;
    int n=N+2;
    for(i = 0; i < n; i++)  
    {  
        if(arr[abs(arr[i])] > 0)  
            arr[abs(arr[i])] = -arr[abs(arr[i])];  
        else
        { 
            if(flag==0){
                result.first=abs(arr[i]);
                flag++;
            }
            else{
                result.second=abs(arr[i]);
                break;
            }
        }
    }      
	return result;
}


int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        pair<int , int>res;
        res = twoRepeated(a, n);
        cout<<res.first<<" "<<res.second<<endl;
    }
    return 0;
}
  // } Driver Code Ends