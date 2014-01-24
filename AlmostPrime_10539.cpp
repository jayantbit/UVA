#include<iostream>
#include<cstdlib>
#include<cmath>
#include<map>
#define mx 10000000
typedef  long long int ull;
using namespace std;

map <ull,int> m;

int *prime;
 void sieve()
{
prime=(int*)calloc(mx+1,sizeof(int));
prime[0]=1;
prime[1]=1;
int j;
for(j=4;j<=mx;j+=2)prime[j]=1;

   for (int i=3; i*i<=mx; i+=2)
      if (!prime[i])
         for (int k=i*i; k<=mx; k+=i)
            prime[k]=1;
}


ull fn(ull n)
{if(n<=1)return 0;
double d;
ull s=0,i;
for(i=2;;i++)
{
if(prime[i])continue;
if(i*i >n)return s;
d=floor(log10(n)/log10(i));
s+=(ull)d - 1;
}
}


ull fn2(ull n)
{if(n<=1)return 0;
if(m[n])return m[n];
m[n]=fn(n);
return m[n];
}

int main()
{sieve();

ull a,b;
int n;
cin>>n;
while(n--)
{cin>>a>>b;
cout<<fn2(b)-fn2(a-1)<<endl;

}
//single line per input means endl will be there
return 0;
}



