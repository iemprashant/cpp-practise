
#include <bits/stdc++.h>
using  namespace std;
void push()
{
    int num;
    cin>>num;
    arr[++top] = num;
}
void pop(){
    top--;
}
void traversemax(){
    int k=top;
    int maxnum=0;
    while(k--){
        maxnum=max(maxnum,arr[k]);
    }
    cout<<maxnum<<endl;
}
int arr[10];
int top=-1;
void main()
{
    int q;
    while(q--){
        int n;
        cin>>n;
        switch(choice)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: traversemax();
            break;
            default:
        }

    }
}
