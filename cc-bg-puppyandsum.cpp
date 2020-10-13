#include <iostream>
using namespace std;
int seriessum(int a){
    return (a>1)?a+seriessum(a-1):1;
}
int sum(int d,int n){
    return (d>1)? sum(d-1,seriessum(n)) : seriessum(n);
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<sum(a,b)<<endl;
    }
}
