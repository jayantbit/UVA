#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int fn(int n)
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

int fn2(int n) 
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
    int i;
    for(i=1;i<20;i++)cout<<i<<" "<<fn(i)<<" "<<fn2(i)<<endl;
    
    system("pause");
}
