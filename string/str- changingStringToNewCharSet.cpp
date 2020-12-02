#include <bits/stdc++.h>
using namespace std;
void newcharset(string charset,string str){
    char hash[26];
    for(int i=0;i<charset.length();i++){
        hash[charset[i]-97]=char(97+i); 
    }
    for(int i=0;i<str.length();i++){
        cout<<hash[str[i]-97];
    }
}
int main() {
    string charset,str;
    cin>>charset>>str;
    newcharset(charset,str);
}
