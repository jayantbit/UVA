#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
typedef unsigned long long int ull;
 
vector <int> isprime(46401); 

ull fact=1;

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
{ fact=1;
   if(n<=5)return n;
   if(n<=46400 && !isprime[n])return n;
   
   ull m=(ull)(sqrt(n) +1),i;
   ull k=n;
   ull d=0;

   for ( i=2; i<=m && n>1; i++)
   {
   if(isprime[i] || n%i)continue;
   while(!(n%i)){n/=i;d++;}
   k*=(i-1);
   k/=i;
   fact*=d+1;
   d=0;
   }


if(fact==1)return n;
if(n!=1){k*=(n-1);k/=n;fact*=2;}

return k;
} 

int main()
{
sieve(46400);
ull n;
while(cin>>n)
cout<<n-fn(n)-fact+1<<endl;

return 0;
}
