
#include <bits/stdc++.h>
#include <string>

using namespace std;
const char keypad[10][5] = {"", "", "abc", "def", "ghi", "jkl", 
                               "mno", "pqrs", "tuv", "wxyz"}; 
void generatenames(int in[],char out[],int i,int j,int n,vector<string> &res){
	if(i==n){
		out[j]='\0';
		res.push_back(out);
		return;
	} 
	if(in[i]==1||in[i]==0){
		generatenames(in,out,i+1,j,n,res);
	}
	for(int k=0;k<strlen(keypad[in[i]]);k++){
		out[j]=keypad[in[i]][k];
		generatenames(in,out,i+1,j+1,n,res);
	}
	return;
}
class Solution
{
    public:
    vector<string> possibleWords(int a[], int n)
    {
    	vector <string> res;
    	char result[n+1];
    	generatenames(a,result,0,0,n,res);
    	return res;
    }

};
int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends