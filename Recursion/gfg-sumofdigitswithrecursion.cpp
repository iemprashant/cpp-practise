
#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    return (n>0) ? (n%10)+sumOfDigits(n/10):0;
}

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    
	    cin>>n;
	    
	    cout<<sumOfDigits(n)<<endl;
	    
	    
	}
	return 0;
} 