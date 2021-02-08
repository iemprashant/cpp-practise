
#include<iostream>
using namespace std;

bool isSparse(int n){
    if(n & n>>1){
        return false;
    }
    return true;
}

int main()
{
    int t,n;
    
    cin>>t;
    while(t--)
    {
        //initializing n
        cin>>n;
        
        //printing 1 if isSparse() returns true
        //else 0
        if(isSparse(n)){
            cout << "1" << endl;
        }
        else cout << "0" << endl;
        
    }
    return 0;
}
  // } Driver Code Ends