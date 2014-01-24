#include<iostream>

using namespace std;
typedef unsigned long long int ull;
ull  pow(ull x)
{return x*x;}

ull bigmod(ull b,ull p,int m) 
{
if (p == 0) return 1;
else if (p%2 == 0)
return pow(bigmod(b,p/2,m)) % m; 
else return ((b % m) * bigmod(b,p-1,m)) % m;
}


int main()
{ull b,p;
int m;
while(cin>>b>>p>>m)
cout<<bigmod(b,p,m)<<endl;
return 0;
}
    
