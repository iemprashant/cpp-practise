#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> primeseive(int n){
    vector <int> listofprime;
    int primearray[n]={0};
    listofprime.push_back(2);
    for(ll i=3;i<=n;i+=2){
        primearray[i]=1;
    }
     for(ll i=3;i<=n;i+=2)
     {
        if(primearray[i]==1)
        {
            listofprime.push_back(i);
            for(ll j=i *i ;j<=n;j=j+i)
            {
                primearray[j]=0;
            }
        }
    }
    return listofprime;
}
int main(){
	int n;
    cin>>n;
    vector <int> primeslist=primeseive(1000005);
    cout<<primeslist[n-1];
    return 0;
}