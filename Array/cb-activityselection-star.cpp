#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>p1,pair<int,int>p2){
	int key1,key2;
	key1=p1.second;
	key2=p2.second;
	return key1<key2;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		pair<int,int>p[n];
		for(int i=0;i<n;i++){
			cin>>p[i].first;
			cin>>p[i].second;
		}
		sort(p,p+n,comp);
		int j=0;
		int ans=1;
		for(int i=0;i<n;i++){
			if(p[i].first>=p[j].second){
				ans++;
				j=i;
			}
		}
		cout<<ans<<endl;
	}
}
