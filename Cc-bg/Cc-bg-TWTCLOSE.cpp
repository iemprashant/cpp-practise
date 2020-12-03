#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int arr[n]={0};
	char str [1010];
	int num=0;
	while(k--){
		cin>>str;
		if(strcmp(str,"CLICK")==0){
			cin>>num;
			arr[num-1]?arr[num-1]=0:arr[num-1]=1;
		}
		else{
			for(int i=0;i<n;i++){
					arr[i]=0;
				}
		}
		cout<<count(arr,arr+n,1)<<endl;
	}
	
	return 0;
}