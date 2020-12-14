#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        char arr[1000];
        cin>>arr;
        int l=strlen(arr);
        int i=0,j=1;
        while(j<l ){
            if(arr[i]!=arr[j]){
                j++;
                i++;
            }
            else{
                while(arr[i]==arr[j]){
                    j++;
                }
                i++;
                arr[i]=arr[j];
            }
        }
        i++;
        arr[i]='\0';
        cout<<arr<<endl;
    }
    return 0;
}