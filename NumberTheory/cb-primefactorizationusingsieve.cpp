#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int > primeseive(int *primearray,int n){
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
vector <int> factorise(int m, vector <int> &primes){
    vector <int> factors;
    factors.clear();
    int i=0;
    int p=primes[0];
    while(p*p<=m){
        if(m%p==0){
            factors.push_back(p);
            while(m%p==0){
                m=m/p;
            }
        }
        i++;
        p=primes[i];
    }
    if(m!=1){
        factors.push_back(m);
    }
    return factors;
}
int main(){
    int n=1000005;
    int primearray[n]={0};
    vector <int> primes=primeseive(primearray,n);
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        vector <int> factors = factorise(num,primes);
        for (auto f:factors){
            cout<<f <<" ";
        }
        cout<<endl;
    }
    return 0;
}