#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll modularexponentiatioin(ll a,ll b,ll c){
    ll ans=1;
    while(b>0){
        if(b&1){
            ans=(ans*a)%c;
        }
        a=(a*a)%c;
        b=b>>1;
    }
    return ans;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<modularexponentiatioin(a,b,c);
}