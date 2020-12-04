#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
	cin>>t;
    while (t--){
		int n;
		cin>>n;
		int arr[n]={0};
        int ans=1;
        int fptr=0;
        int bptr=n-1;
		for(int i=0;i<n;i++)
        {
            cin>>arr[i];
		}
        if(arr[0]!=1){
            ans=0;
        }
        else
        {
            while(fptr<bptr)
            {
                //to maintain the flow of 1 to 7
                if(arr[fptr]!=arr[bptr])
                {
                    ans=0;
                }
                if(arr[fptr]!=arr[fptr+1] && arr[fptr]+1 != arr[fptr+1])
                {
                    ans=0;
                }
                fptr++;
                bptr--;
            }
            if(arr[fptr]!=7){
                ans=0;
            }
        }
        ans?cout<<"yes"<<endl:cout<<"no"<<endl;
    }
	return 0;
}