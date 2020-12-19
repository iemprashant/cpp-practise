#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    cin>>n;
    long long int arr[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long int x=0,y=0;
    for(long long int i=0;i<n;i++){
        if(i<n/2){
            x+=arr[i];
        }
        else{
            y+=arr[i];
        }
    }
    cout<<x*x+y*y;
}

