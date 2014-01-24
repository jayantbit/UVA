#include<iostream>
#include<cmath>
using namespace std;
int ar[100]={0};
int prime[10000001]={0};

 void sieve(int n)
{
prime[0]=1;
   prime[1]=1;
   int m=(int)sqrt(n);

   for (int i=2; i<=m; i++)
      if (!prime[i])
         for (int k=i*i; k<=n; k+=i)
            prime[k]=1;

   
} 

int facts(int n)
{int i,m=sqrt(n),s=0;
    for(i=2;i<=m && n>1;i++)
    {if(prime[i])continue;
     if(n%i)continue;
     while(!(n%i)){n/=i;s++;}
    }
    if(n!=1)s++;
    return s;
}    

void make()
{
     ar[0]=ar[1]=0;
int i;
for(i=2;i<=100;i++)
ar[i]=ar[i-1]+facts(i);
}

int main()
{sieve(10000000);
    //make();
   // cout<<ar[5];
    system("pause");
}
