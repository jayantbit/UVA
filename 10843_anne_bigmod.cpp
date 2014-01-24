#include<iostream>
using namespace std;
typedef unsigned long long int ull;

ull  pow(ull x){return x*x;}

ull bigmod(ull b,ull p,ull m=2000000011)
{

if (p <= 0) return 1;
else if (p%2 == 0)
return pow(bigmod(b,p/2,m)) % m;
else return ((b % m) * bigmod(b,p-1,m)) % m;
}

int main()
{
int n,i=0,j;
cin>>n;
while(i++<n)
{cin>>j;
cout<<"Case #"<<i<<": "<<bigmod(j,j-2)<<endl;
}

return 0;
}
