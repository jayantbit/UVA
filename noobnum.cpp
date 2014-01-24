#include<iostream>
#include<cstdlib>
#include<vector>
#define mx 700000
using namespace std;

int *prime;

vector <int> v;


void sieve()
{
prime=(int*)calloc(mx+1,sizeof(int));
prime[0]=1;
prime[1]=1;
int j;

//for(j=4;j<=mx;j+=2)prime[j]=1;

   for (int i=2; i*i<=mx; i+=2)
      if (!prime[i])
         for (int k=i*i; k<=mx; k+=i)
            prime[k]=1;
}


int fn(int n)
{
    int i,j=0;
    for(i=2;i*i<=n;i++)
    {
         if(n%i==0)j++;
         {
         while(n%i==0)n/=i;
         }
    }
   if(n!=1)j++;
   return j;
}

int main()
{sieve();
    int n=0,i,t;
    
    for(i=1;n<=700000;i++)
    if(!prime[fn(i)]){v.push_back(i);n++;}
    
    cin>>t;
    while(t--)
    {
              cin>>i;
              cout<<v[i-1]<<endl;
    }
   return 0;
}       
    
    
    
 
                       
    
