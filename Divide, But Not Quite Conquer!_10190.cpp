#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;


int fn(int n,int m,int k)
{ if(m==n)return 1;
 if(m>n)return 0;
 double d=floor(log10(n)/log10(m)+ 1e-8);
 if(pow(m,d)!=n)return 0;
 return 1;
 
 return fn(n,m*k,k);
}

int main()
{
  int n,m;
  while(cin>>n>>m)
  {
  
   
   if(m>1 && fn(n,m,m))
    do
     {cout<<n;
     if(n!=1)cout<<" ";
      n/=m;
     }while(n);
   else cout<<"Boring!";
  cout<<endl;
   
  }
  return 0;
}    
