#include<iostream>
#include<cmath>
#include<cstdio>
#define mx 10000
typedef unsigned long long int ull;
using namespace std;
int num[mx+1]={0};
int prime[mx+1]={0};

int isprime(ull n)
{
if(n%2==0 || n%3==0)return 0;
ull j=1,k=5;
for(;k*k<=n;j++,k=6*j-1)
{                       if(n%k==0)return 0;
                        if(n%(k+2)==0)return 0;
}
return 1;
}

void fn()
{int a;
num[0]=41;prime[0]=1;
for(a=1;a<=mx;a++)
{
num[a]=num[a-1]+2*a;
prime[a]=isprime(num[a])+prime[a-1];
}
}


int main()
{
fn();
int a,b,c;
double e,f,n;


while(cin>>a>>b)
 {
 c=prime[b];
 if(a)c-=prime[a-1];               
e=10000*(double)c/(b-a+1);
f=modf(e,&n);
e=n;
if(f>=0.5)e++;e/=100;

printf("%0.2lf\n",e);
}

return 0;
}
 
