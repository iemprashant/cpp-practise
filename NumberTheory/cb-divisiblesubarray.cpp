#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll pre[100005]={0};
        pre[0]=1;
        
        ll n;
        cin>>n;
        ll num;
        ll sum=0;
        for(ll i=0;i<n;i++){
            cin>>num;
            sum+=num;
            sum%=n;
            sum=(sum+n)%n;
            pre[sum]++;
        }
        ll ans=0;
        for(ll i=0;i<n;i++){
            ll m=pre[i];
            ans+=(m)*(m-1)/2;
        }
        cout<<ans<<endl;
    }
}