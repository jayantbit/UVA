//11805
#include<iostream>
using namespace std;

int fn(int n,int k,int p)
{
if(p<=n-k)return k+p;

p-=n-k;
if(p==1)return 1;
p--;
return 1+p;
}

int main()
{
 int n,k,p,t,i=0;
 cin>>t;
 while(i++<t && cin>>n>>k>>p)
 cout<<"Case "<<i<<": "<<fn(n,k,p%n)<<endl;
 return 0;
}   
