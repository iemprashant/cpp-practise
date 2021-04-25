#include <bits/stdc++.h>
using namespace std;
void bubble_sort_rec(int arr[],int j,int n){
	if(n==1){
		return;
	}
	if(j==n-1){
		return bubble_sort_rec(arr,0,n-1);
	}
	if(arr[j]>arr[j+1]){
		swap(arr[j],arr[j+1]);
	}
	bubble_sort_rec(arr,j+1,n);
	return;
	};

int main(){
	int arr[]={5,4,3,2,1};
	bubble_sort_rec(arr,0,5);
	for (auto i = 0; i<5; ++i)
        cout << arr[i] << " ";
}