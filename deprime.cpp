//11408

#include<iostream>
#include<cmath>
#include<vector>
using namespace std;



vector <int> prime(5000001);
vector <int> ans(5000001);

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


int fn(int st,int a,int c)
{
 
 if(a==1)return 0;
 if(st>c)return !prime[a];
 if(prime[st])
 return fn(st+1,a,c);
 if(a%st)return fn(st+1,a,c);
 return (st+ fn(st+1,a/st,c));
} 
  
 
  void make()
{
int i;
for(i=2;i<=50000;i++)
ans[i]=ans[i-1]+ !prime[fn(2,i,sqrt(i))];
}


int main()
{sieve(5000000);
  make();
 //int a=5000000,b;
 //for(a=2;a<=50000;a++)fn(a);
 
//cout<<fn(2,a,sqrt(a));
 //while(cin>>a>>b && (a+b))cout<<ans[b]-ans[a-1]<<endl;
 cout<<ans[120]-ans[99];
 system("pause");
 return 0;
}
