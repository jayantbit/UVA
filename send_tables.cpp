#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
typedef unsigned long long int ull;
 
vector <int> isprime(231); 
vector <int> a(50001);


void sieve(int n)
{
   isprime[0]=1;
   isprime[1]=1;
   int m=(int)(sqrt(n)+1);

   for (int i=2; i<=m; i++)
      if (!isprime[i])
         for (int k=i*i; k<=n; k+=i)
            isprime[k]=1;
}  
 
 ull fn(ull n)
{
   if(n==1)return 1;
   if(n<=230 && !isprime[n])return n-1;
   
   ull m=(ull)(sqrt(n) +1),i;
   ull k=n;

   for ( i=2; i<=m && n>1; i++)
   {
   if(isprime[i] || n%i)continue;
   while(!(n%i)){n/=i;}
   k*=(i-1);
   k/=i;
   }
if(n!=1){k*=(n-1);k/=n;}
if(k==n)k--;
return k;
} 

int main()
{
sieve(230);
ull n;
a[0]=0;
for(n=1;n<=50000;n++)
a[n]=a[n-1]+2*fn(n);

while(cin>>n && n)
cout<<a[n]-1<<endl;

return 0;
}

