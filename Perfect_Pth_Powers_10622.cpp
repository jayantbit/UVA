#include<iostream>
#include<cmath>
using namespace std;
typedef long long int ull;

ull gcd(ull a,ull b)
{if(!b)return a;
return gcd(b,a%b);
}
//-244140625
ull fn(ull n)
{ int f=0;
    if(n<0){f=1;n=-n;}
   ull i,j=-1,k;

    for(i=2;i*i<=n;i++)
    {k=0;
    while(n%i==0){n/=i;k++;}
    if(k && j==-1)j=k;
    else if(k)j=gcd(j,k);
    }
    
    if(n!=1)return 1;
    if(!f || j%2)return j;
    
    if(f){
               while(j%2==0)j/=2;
               return j;
               }
    return 1;
    
   
}

int main()
{
    long long int n;
    while(cin>>n && n)cout<<fn(n)<<endl;
    return 0;
}
