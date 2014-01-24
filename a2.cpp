#include<iostream>
#include<cmath>
using namespace std;

typedef  long long int ull;

ull c(int n,int m)
{
  int i;
 ull ans;

 ans=1;
 if(m>n/2)m=n-m;
 for(i=1;i<=m;i++)
 {ans*=n--;
 ans/=i;
 }
 return ans;
}


int main()
{

int k=4;
int r=2;
int p=-1;
ull sum=0;



for(;r<=k-1;r++)
{
sum+=p*(c(k-1,r+1)*10+c(k-1,r)*9);
p*=-1;
}

sum+=9*pow(10.0,(double)k-1);

cout<<sum<<endl;

system("pause");
return 0;
}










 


