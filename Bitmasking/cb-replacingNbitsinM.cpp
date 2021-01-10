#include <bits/stdc++.h>
using namespace std;
clearbits(int n,int i,int j){
	int allones=(~0);
	int a=allones << (j+1);
	int b=(1<<i)-1;
	int mask=a|b;
	return n & mask;
};
int replacebits(int n,int m,int i,int j){
    int n1=clearbits(n,i,j);
    int ans= n1 | (m<<i);
    return ans;
}
int main(){
	int n,m,i,j;
	cin>>n>>m>>i>>j;
	cout<<replacebits(n,m,i,j);
}