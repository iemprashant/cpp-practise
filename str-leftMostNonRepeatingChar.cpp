#include <bits/stdc++.h>
using namespace std;
void leftmostcharnonrepeating(int n,string s){
    int count[256];
    for(int i=0;i<256;i++){
        count[i]=-1;
    }
    for(int i=0;i<n;i++){
        if(count[s[i]]==-1){
            count[s[i]]=i;
        }
        else{
            count[s[i]]=-2;
        }
    }
    int res=INT_MAX;
    for(int i=0;i<256;i++){
        if(count[i]>=0)
        res=min(res,count[i]);
    }
    (res==INT_MAX)?cout<<"-1":cout<<s[res];
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        leftmostcharnonrepeating(n,s);
        cout<<endl;
    }
}
