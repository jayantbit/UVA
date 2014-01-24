
//10533
#include<iostream>
#include<cmath>
#include<vector>
#include<cstdlib>
using namespace std;


int    dig[1000001]={0};
 
 int sum(int d)
 {
 if(!d)return 0;
 return (d%10+sum(d/10));
}
 
 bool  prime[1000001]={false};
 
 int sieve(int n)
{
 int i;
 
   prime[0]=true;
   prime[1]=true;
   

   for ( i=2; i*i<=n; i++)
      if (!prime[i])
         for (int k=i*i; k<=n; k+=i)
            prime[k]=true;

} 

void make()
{sieve(1000000);
 int i;
 dig[2]=1;
 for(i=3;i<=1000000;i++)
 {if(!prime[i] && !prime[sum(i)])dig[i]=dig[i-1]+1;
 else dig[i]=dig[i-1];
 }
}
int main()
{make();
 int t,a,b;   
 cin>>t;
 while(t-- && cin>>a>>b)
 cout<<dig[b]-dig[a-1]<<endl;

return 0;
}               
