#include<iostream>
#include<cmath>
using namespace std;
typedef unsigned long long int ull;

int isprime[1012]={0};

int isprime2(ull n)
{
if(n==2)return 1;
if(!(n%2))return 0;
ull i=3;
for(;i<sqrt(n);i+=2)
if(!(n%i))return 0;
return 1;
}

void sieve(int n)
{
   isprime[0]=1;
   isprime[1]=1;
   int m=(int)sqrt(n);

   for (int i=2; i<=m; i++)
      if (!isprime[i])
         for (int k=i*i; k<=n; k+=i)
            isprime[k]=1;
}

 ull fn(ull n)
{
   if(n==1)return 0;
   if(isprime2(n))return n-1;

   int m=(int)(sqrt(n)+1),i;
   ull k=n;

   for ( i=2; i<=m && n>1; i++)
   {
   if(isprime[i] || n%i)continue;
   while(!(n%i)){n/=i;}
   k*=(i-1);
   k/=i;
   }

return k;
}

int main()
{
sieve(1001);
ull n;
while(cin>>n && n)
cout<<fn(n)<<endl;

return 0;
}


