#include <bits/stdc++.h>
using namespace std;
void sumofarray(int a,int b,int arra[],int arrb[]){
    // here a<b
    int carry=0;
	int sum=0;
	for(int i=0;i<b;i++){
		if(i<a){
			sum=arra[i]+arrb[i]+carry;
			arrb[i]=sum%10;
			carry=sum/10;
		}
		else{
			arrb[i]+=carry;
			carry=carry/10;
		}
	}
	while(carry){
        arrb[b]=carry%10;
        carry=carry/10;
        b++;
	}
	for(int i=b-1;i>=0;i--){
		cout<<arrb[i]<<", ";
	}
    cout<<"END";
}
int main(){
	int n;
	cin>>n;
	int arr1[n];
	for(int i=n-1;i>=0;i--){
		cin>>arr1[i];
	}
	int m;
	cin>>m;
	int arr2[m];
	for(int i=m-1;i>=0;i--){
		cin>>arr2[i];
	}
	(m>=n)?sumofarray(n,m,arr1,arr2):sumofarray(m,n,arr2,arr1);
}