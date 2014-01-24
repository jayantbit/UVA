#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
typedef unsigned long long int ull;
int prime[3201]={0};

 
 int sieve(ull n)
{
 
   
   prime[0]=1;
   prime[1]=1;
   int m=(int)sqrt(n);

   for (int i=2; i<=m; i++)
      if (!prime[i])
         for (int k=i*i; k<=n; k+=i)
            prime[k]=1;

} 

int main()
{
    sieve(3200);
    ull n,c,i,p;
    while(cin>>n && n)
    {c=0;
     cout<<n<<" : ";
     
     for(i=2;i<3200 && n>1;i++)
     {
     if(prime[i])continue;
     p=i;
     
     if(n%p)continue;
     c++;
     while(!(n%p))n/=p;
     }
     if(!c || n!=1)c++;
     cout<<c<<endl;
    }
return 0;
}   
     
                 
