#include <bits//stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    int count[26]={0};
    for(int i=0;i<s.length();i++){
        count[s[i]-97]++;
    }
    for(int i=0;i<26;i++){
        if(count[i]==0){
            cout<<char(i+97);
        }
    }
    
}

