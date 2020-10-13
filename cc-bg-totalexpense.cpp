
#include<bits/stdc++.h> 
using namespace std;
void totalexpense(double q,double p){
    double orderprice=q*p;
    double order= (q>=1000)?orderprice-orderprice/10:orderprice;
    cout<<fixed<<setprecision(6)<<order<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        double a,b;
        cin>>a>>b;
        totalexpense(a,b);
    }
}
