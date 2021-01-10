#include <iostream>
using namespace std;
#define ll long long
ll playwithbits(ll a){
    int ans = 0;
    while(a){
        ans+=a&1;
        a=a>>1;
    }
    return ans;
}
int main() {
    ll q,a,b,ans;
    cin>>q;
    while(q--){
        cin>>a>>b;
        ans = 0;
        for(ll i = a; i<=b; i++)
         ans += playwithbits(i);
        cout<<ans<<endl;
    }
}
