#include<iostream>
#include<cstdlib>
#include<vector>
#define mx 10000000
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


int f(int n,int d)
{ if(d==1 && !prime[n]){cout<<n<<" ";return 1;}
int i;
for(i=n-1;i>=2;i--)
{if(prime[i])continue;

if(f(n-i,d-1))
{cout<<i;
if(d-4)cout<<" ";else cout<<endl;
return 1;
}
}
return 0;
}

int main()
{sieve();
int n;

while(cin>>n)if(!f(n,4))cout<<"Impossible."<<endl;

return 0;
}


