#include <bits/stdc++.h>
#define ll long long
using namespace std;
void primeseive(int *primearray,int n){
    //for 0 and 1 they are already zero
    primearray[2]=1;
    for(ll i=3;i<=n;i+=2){
        primearray[i]=1;
    }
     for(ll i=3;i<=n;i+=2)
     {
        if(primearray[i]==1)
        {
            for(ll j=i *i ;j<=n;j=j+i)
            {
                primearray[j]=0;
            }
        }
    }
}
int noofprimeinrange(int a,int b,int csum[]){
	return csum[b]-csum[a-1];
}
int main(){
	int primearray[1000005]={0};
    primeseive(primearray,1000005);
	int csum[1000005]={0};
	for(int i=0;i<1000005;i++){
		csum[i]=csum[i-1]+primearray[i];
	}
    int q;
    cin>>q;
    int a,b;
    while(q--){
        cin>>a>>b;
        cout<<noofprimeinrange(a,b,csum)<<endl;
    }
    return 0;
}