#include<iostream>
#include<cmath>
#include<cstdlib>
#include<map>
#define mx 1000000
typedef unsigned long long int ull;
using namespace std;


map <int,ull> m;

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




ull fn(int n,ull p)
{if(p>n)return 0;
if(p>n/2)return 1;
return n/p+fn(n/p,p);
}



ull fn3(int n)
{
if(n==2 || n==3)return n-1;
int j;
ull q=0;
for(j=2;j<=n;j++)
{
if(prime[j])continue;
q+=fn(n,j);
}

return q;
}


ull get(int n)
{if(m[n])return m[n];
m[n]=fn3(n);
return m[n];
}

int main()
{
sieve();
int i;
for(i=2;i<=1000000;i++){cout<<i<<" ";m[i]=fn3(i);}

while(cin>>i)
cout<<m[i]<<endl;
return 0;
}
