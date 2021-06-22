#include <bits/stdc++.h>
using namespace std;
void generate_strings(int in[],char out[],int i,int j,int n,vector<string> &res){
	if(i==n){
		out[j]='\0';
		res.push_back(out);
		return;
	}
	int digit=in[i];
	char ch=digit+'A'-1;
	out[j]=ch;
	generate_strings(in,out,i+1,j+1,n,res);
	if(i!=n-2){
		int seconddigit=in[i+1];
		int num=digit*10+seconddigit;
		if(num<=26){
			ch=num+'A'-1;
			out[j]=ch;
			generate_strings(in,out,i+2,j+1,n,res);
		}
	}
	return;
}
vector <string> all_strings(int a[],int n){
	vector <string> res;
    	char result[n+1];
    	generate_strings(a,result,0,0,n,res);
    	return res;
     
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }

	    vector <string> res = all_strings(a,N);
	  	for (string i : res) cout << i << " ";
	   	cout << endl;

	}
}