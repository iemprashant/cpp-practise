#include <bits/stdc++.h>
using namespace std;
long long  fac(int n){
	return n<=1?1:n*fac(n-1);
}
bool repition(string s){
	int freq[26]={0};
	for(int i=0;i<s.length();i++){
		if(freq[s[i]-'a']==0){
			freq[s[i]-'a']++;
		}
		else {
			return true;
		}
	}
	return false;
}
int countrightsmaller(string s,int low,int high){
	int count=0;
	for(int i=low+1;i<=high;i++){
		if(s[i]<s[low]){
			count++;
		}
	}
	return count;
}
int rankofpermutaion(string s){
	if(repition(s)){
		return 0;
	}
	int len=s.length();
	long long mul=fac(len);
	long long rank=1;
	for(int i=0;i<len-1;i++){
		mul/=len-i;
		rank+=countrightsmaller(s,i,len-1)*mul;
	}
	return rank%1000003;
	
}

int main(){
	int t;
	cin>>t;
	cin.get();
	while(t--){
		string s;
		cin>>s;
		cout<<rankofpermutaion(s)<<endl;
	}
}