 #include <bits/stdc++.h>
using namespace std;

string extractkeyfromstring(string str,int key)
{
	char *s= strtok((char *)str.c_str()," ");
	while(key>1){
		s=strtok(NULL," ");
		key--;
	}
	return (string)s;
}
bool numcamprator(pair<string,string> s1,pair<string,string> s2){
	string key1,key2;
	key1=s1.second;
	key2=s2.second;
	return stoi(key1)<stoi(key2);
}
bool lexcamprator(pair<string,string> s1,pair<string,string> s2){
	string key1,key2;
	key1=s1.second;
	key2=s2.second;
	return key1<key2;
}
int main(){
	int n;
	cin>>n;
	cin.get();
	string stirngarr[n];
	for(int i=0;i<n;i++){
		getline(cin,stirngarr[i]);
	}
	int key;
	string reverse,ordering;
	cin>>key>>reverse>>ordering;
	pair <string,string> pairarr[n];
	for(int i=0;i<n;i++){
		pairarr[i].first=stirngarr[i];
		pairarr[i].second=extractkeyfromstring(stirngarr[i],key);
	}
	if(ordering=="numeric"){
		sort(pairarr,pairarr+n,numcamprator);
	}
	else{
		sort(pairarr,pairarr+n,lexcamprator);
	}
	if(reverse=="true"){
		int i=0,j=n-1;
		while(i<j){
			swap(pairarr[i],pairarr[j]);
			i++;
			j--;
		}
	}
	for(int i=0;i<n;i++){
		cout<<pairarr[i].first<<endl;
	}
}