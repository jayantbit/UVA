#include<iostream>
#include<cmath>
#include<cstdlib>
#include<sstream>
#include<string>
#include<cstdio>
using namespace std;

int *prime;
int *v;
typedef unsigned long long int ull;


void sieve(int n)
{
prime=(int*)calloc(n+1,sizeof(int));

 prime[0]=1;
   prime[1]=1;
   int m=(int)sqrt(n);

   for (int i=2; i<=m; i++)
      if (!prime[i])
         for (int k=i*i; k<=n; k+=i)
            prime[k]=1;
}


void divisors(int n)
{ int i=0,m=sqrt(n)+1;

for(i=2;i<=m && n>1;i++)
{
if(prime[i])continue;
if(n%i)continue;
while(!(n%i)){n/=i;v[i]++;}
}

if(n!=1)v[n]++;
}

ull fn()
{
ull sum=1;
for(int i=2;i<=1000;v[i]=0,i++)
{
if(sum==-1)continue;
sum*=v[i]+1;

if(sum>pow(10.0,18.0))
sum=-1;
}
return sum;
}



int main()
{
sieve(1000);
v=(int*)calloc(1001,sizeof(int));


string str,temp;
int n,k,t,c=0;
ull sum;

cin>>t;
getchar();

while(c++<t)
{
cout<<"Case "<<c<<": ";


getline(cin,str);

stringstream in(str);

in>>n>>temp;
k=temp.length();


for(;n>0;n-=k)
divisors(n);

sum=fn();

if(sum!=-1)cout<<sum;
else cout<<"Infinity";
cout<<endl;
}


return 0;
}


