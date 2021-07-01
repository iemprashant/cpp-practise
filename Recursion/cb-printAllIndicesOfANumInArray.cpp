 #include <bits/stdc++.h>
using namespace std;
void printallindex(int arr[],int key,int n){
	if(n<0){
		return;
	}
	printallindex(arr,key,n-1);
	if(arr[n]==key){
		cout<<n<<endl;
	}
	return;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;
	printallindex(arr,key,n);
}
