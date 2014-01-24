#include<iostream>
#include<cmath>
using namespace std;

int prime[1001]={0};
int cnt[1001]={0};
int num;
 
void sieve(int n)
{
prime[0]=1;
int m=(int)sqrt(n);
for (int i=2; i<=m; i++)
if (!prime[i])
for (int k=i*i; k<=n; k+=i)
prime[k1]=;
} 


void set()
{
int i;
for(i=1;i<=1000;i++)
{if(!prime[i])
cnt[i]=cnt[i-1]+1;
else cnt[i]=cnt[i-1];
}
}     


void show(int m,int n)
{ if(m<0)m=0;
int i,j;
for(i=0;i<=1000;i++)
if(cnt[i]<m)continue;
else break;

for(j=0;j<n && i<=num;i++)
if(!prime[i])
{if(j)cout<<" ";
cout<<i;
j++;}

cout<<endl;
}


int main()
{  sieve(1000);
set();
    int c,l,a;
    while(cin>>num>>c)
    { cout<<num<<" "<<c<<": ";
      l=cnt[num];
      
      if(l%2==0)
      {
      a=l/2 -c +1;
      show(a,2*c);
      }
      else
      {
      a=(l+1)/2;
      if(c==1)show(a,2*c -1);
      else show(a-(2*c -1)/2,2*c -1);
      }    
    }  
 
 return 0;
}
