vector <int > primeseive(int n){
    int primearray[n]={0};
    vector <int> primelist;
    primelist.push_back(2);
    for(int i=3;i<=n;i+=2){
        primearray[i]=1;
    }
     for(int i=3;i<=n;i+=2)
     {
        primelist.push_back(i);
        if(primearray[i]==1)
        {
            for(int j=i *i ;j<=n;j=j+i)
            {
                primearray[j]=0;
            }
        }
    }
    return primelist;
}
int noofdivisors(int m){
    vector <int> primes=primeseive(m);
    int i=0;
    int p=primes[0];
    int ans=1;
    while(p*p<=m){
        if(m%p==0){
            int cnt=0;
            while(m%p==0){
                cnt++;
                m=m/p;
            }
            ans*=(cnt+1);
        }
        i++;
        p=primes[i];
    }
    if(m!=1){
        ans*=2;
    }
    return ans;
}
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
int common_divisor(int a, int b)
{
    int m=gcd(a,b);
    
    return noofdivisors(m);
    
}