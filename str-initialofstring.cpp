#include <bits/stdc++.h>
using namespace std;
void initialofname(string s){
    cout << (char)toupper(s[0]); 
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==' '){
            cout <<" "<<(char)toupper(s[i+1]);
        }
    }
};
int main() {
    string s;
    getline(cin,s);
    initialofname(s);
}
