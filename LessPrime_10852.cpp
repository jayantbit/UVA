#include<iostream>
#include<cstdlib>
#define mx 10000
using namespace std;


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

int main()
{
int n,k;
sieve();
cin>>k;
while(k-- && cin>>n)
{n=n/2 +1;
while(prime[n++]);
cout<<n-1<<endl;
}
return 0;
}
