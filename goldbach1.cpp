//543
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int fn2(int n)
{
   if (n==1) return 0;
   if (n==2) return 1;
   if (!(n&1)) return 0;
   int m=(int)sqrt(n);

   for (int i=3; i<=m; i+=2)
      if (n%i==0)
         return 0;

   return 1;
}

int fn(int n) 
{
	if(n==1)return 0;
    if(n==2 || n==3)return 1;
    if(!(n&1) || !(n%3))return 0;
	
    int i,x=(int)(sqrt(n)+0.5);
    for(i=1; (6*i-1)<=x; i++) 
		if(n%(6*i-1) == 0 || n%(6*i+1)==0) 			return 0;
	return 1;
}


int main()
{
    int n,i,k;
    while(cin>>n && n)
    {k=1;
    for(i=2;i<=n/2;i++)
    if(fn(i) && fn(n-i))
    {printf("%d = %d + %d\n",n,i,n-i);k=0;break;}
    if(k)cout<<"Goldbach's conjecture is wrong."<<endl;
    }
    return 0;
}
