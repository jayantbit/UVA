// uva 10780

#include<iostream>
#include<cmath>
using namespace std;
int prime[5001]={0}; 
 
void sieve(int n)
{prime[0]=1;
   prime[1]=1;
   int m=(int)sqrt(n);

for (int i=2; i<=m; i++)
if (!prime[i])
for (int k=i*i; k<=n; k+=i)prime[k]=1;
} 


int count(int n,int a)
{ if(!n)return 0;
 n/=a; 
return n+count(n,a);
}


int main()
{sieve(5000);

int m,n,i,s,j,k,min,l,t,p=1,h;
cin>>t;

while(t-- && cin>>m>>n)
{cout<<"Case "<<p++<<":"<<endl;
l=1;
s=m;
min=0;
for(i=2;i<=s && m>1;i++)
{
if(prime[i] || m%i)continue;
h=0;
while(!(m%i)){m/=i;h++;}

k=count(n,i)/h;


if(l==1){min=k;l=0;}
else if(k<min)min=k;
}
if(min)cout<<min<<endl;
else cout<<"Impossible to divide"<<endl;
}


return 0;
}
