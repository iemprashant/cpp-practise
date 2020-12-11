#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i) 

int main(){
	double d1,v1,d2,v2,p;
	cin>>d1>>v1>>d2>>v2>>p;
	double days=0;
	if(d1==d2){
		days=(d1-1)+p/(v1+v2);
	}
	else if  (d1<d2 && (d2-d1)*v1 >p){
		days=d1-1+(p/v1);
	}
    else if  (d2<d1 && (d1-d2)*v2 >p){
		days=d2-1+(p/v2);
	}
    else{
        days=((p+d1*v1+d2*v2)/(v2+v1))-1;
    }
    cout<<ceil(days)<<endl;
}