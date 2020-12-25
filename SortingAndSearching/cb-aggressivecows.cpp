#include <bits/stdc++.h>
using namespace std;
bool canPlaceCows(int stalls[],int n,int c,int mid){
	int lastcow=stalls[0];
	int count=1;
	for(int i=1;i<n;i++){
		if(stalls[i]-lastcow>=mid){
            lastcow=stalls[i];
			count++;
			if(count==c){
				return 1;
			}
		}
	}
	return 0;
}
 int main(){
	int n,c;
	cin>>n>>c;
	int stalls[n];
	for(int i=0;i<n;i++){
		cin>>stalls[i];
	}
	sort(stalls,stalls+n);
	cout<<endl;
	int s=0;
	int e=stalls[n-1]-stalls[0];
	int ans=0;
	while(s<=e){
		int mid=(s+e)/2;
		bool cowrakhpaye=canPlaceCows(stalls,n,c,mid);
		if(cowrakhpaye){
			ans=mid;
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
	cout<<ans;
}