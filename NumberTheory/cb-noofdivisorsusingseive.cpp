#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int > primeseive(int n){
    int primearray[n]={0};
    vector <int> primelist;
    primelist.push_back(2);
    for(ll i=3;i<=n;i+=2){
        primearray[i]=1;
    }
     for(ll i=3;i<=n;i+=2)
     {
        primelist.push_back(i);
        if(primearray[i]==1)
        {
            for(ll j=i *i ;j<=n;j=j+i)
            {
                primearray[j]=0;
            }
        }
    }
    return primelist;
}
int noofdivisors(int m, vector <int> primes){
    int i=0;
    int p=primes[0];
    int ans=1;
    while(p*p<=m){
        if(m%p==0){
            int cnt=0;
            while(m%p==0){
                cnt++;
                m=m/p;
            }
            ans+=(cnt+1);
        }
        i++;
        p=primes[i];
    }
    return ans;
}
int main(){
    int n=1000005;
    vector <int> primes=primeseive(n);
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        cout<<noofdivisors(num,primes)<<endl;
    }
    return 0;
}
