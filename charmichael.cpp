#include<iostream>
#include<string>
#include<cmath>
using namespace std;
typedef unsigned long long int ull;

int isprime(ull n)
{
if(n==2)return 1;
if(!(n%2))return 0;
ull i=3;
for(;i<sqrt(n);i+=2)
if(!(n%i))return 0;
return 1;
}

ull  pow(ull x)
{return x*x;}

ull bigmod(ull b,ull p,ull m) 
{
if (p == 0) return 1;
else if (p%2 == 0)
return pow(bigmod(b,p/2,m)) % m; 
else return ((b % m) * bigmod(b,p-1,m)) % m;
}


int check(ull n)
{if(isprime(n))return 0;
ull p;
for(p=2;p<n;p++)
if(bigmod(p,n,n)!=p)return 0;
return 1;
}

int main()
{
ull n;

while(cin>>n  && n)
{if(check(n))cout<<"The number "<<n<<" is a Carmichael number.";
else cout<<n<<" is normal.";
cout<<endl;
}
return 0;
}
    
