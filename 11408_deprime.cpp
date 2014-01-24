#include<iostream>
#include<cmath>
#define mx 5000000
using namespace std;

bool  prime[mx+1]={false};
long long int num[mx+1]={0};
long long int sm[mx+1]={0};
 
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

void set()
{
     int i,j;
     for(i=2;i<=mx;i++)
     { if(prime[i])continue;
     for(j=i;j<=mx;j+=i)sm[j]+=i;
     }
}     
     


int fn()
  { int i;
    num[i]=0;
    for(i=1;i<=mx;i++)
    {
           num[i]=num[i-1];                
           if(!prime[sm[i]])num[i]++;
    }
  }       
  
  int main()
  {
        int a,b;
        sieve(mx);
        set();
        fn();
        
       
        
        while(cin>>a && a){cin>>b;cout<<num[b]-num[a-1]<<endl;}
        return 0;  
  }
        
         
