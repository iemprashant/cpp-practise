
#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
        bool check (string str)
        {
            int temp=1;
            for(int i=0;i<str.length()-1;i++){
                if(str[i]!=str[i+1]){
                    temp=0;
                    break;
                }
            }
            return (temp>0);
        }
};
int main()
{
    int t; cin >> t;
    while (t--)
    {
		string s;
		cin >> s;
		Solution ob;
		if (ob.check (s))
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
}