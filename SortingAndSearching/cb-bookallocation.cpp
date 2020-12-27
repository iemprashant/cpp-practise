	#include <bits/stdc++.h>
	using namespace std;
	bool ispossible(int arr [],int book,int student,int curr_min){
		int student_used=1;
		int pagesreading=0;
		for(int i=0;i<book;i++){
			if(pagesreading+arr[i]>curr_min){
				student_used++;
				pagesreading=arr[i];
				if(student_used>student){
					return false;
				}
			}
			else{
				pagesreading+=arr[i];
			}
		}
		return true;
	}
	int bookallocation(int arr[],int book,int student){
		if(book<student){
			return -1;
		}
		int s=arr[book-1];
		int e=accumulate(arr,arr+book,0);
		int ans=INT_MAX;
		while(s<=e){
			int mid=(s+e)/2;
			if(ispossible(arr,book,student,mid)){
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
			int b,s;
			cin>>b>>s;
			int arr[b];
			for(int i=0;i<b;i++){
				cin>>arr[i];
			}
			cout<<bookallocation(arr,b,s)<<endl;
		}
	}