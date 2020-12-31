#include <bits/stdc++.h>
using namespace std;
int noofparatha(int arr[],int cook,int time){
	int num=0;
	for(int i=0;i<cook;i++){
		int timetaken=0;
		int j=1;
		while((timetaken+arr[i]*j)<=time){
			timetaken+=arr[i]*j;
			j++;
			num++;
		}
	}
	return num;
}
int pratatime(int arr[],int cook,int prata){
    int s=0;
	int e=(prata*((prata+1)*arr[0]))/2;
    //max case when all patha made by slowest person
	if(cook==1){  
		return e;
	}
   
	int ans=INT_MAX;
	while(s<=e){
		int mid=(s+e)/2;
		if(noofparatha(arr,cook,mid)>=prata){
			ans=min(ans,mid);
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	return ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int prata,cook;
		cin>>prata>>cook;
		int arr[cook];
		for(int i=0;i<cook;i++){
			cin>>arr[i];
		}
		sort(arr,arr+cook);
		cout<<pratatime(arr,cook,prata)<<endl;
	}
}