//G L
using namespace std;
#include<iostream>
typedef long long int ull;

ull gcd(ull a,ull b)
{if(!b)return a;
return gcd(b,a%b);
}

int main()
{
ull g,l,p,i;
int t;
cin>>t;
while(t-- && cin>>g>>l)
{if(l%g){cout<<"-1"<<endl;continue;}
p=g*l;
for(i=g;i<=p;i++)
if(p%i==0 && gcd(i,p/i)==g)break;
cout<<i<<" "<<p/i<<endl;
}
return 0;
}


