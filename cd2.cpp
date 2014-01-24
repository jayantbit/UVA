#include <stdio.h>
#include <malloc.h>
int main()
{
    
 long long int a,b,temp,*c,*d;
 c=(long long int*)malloc(sizeof(long long int)*1000000000);
d=(long long int*)malloc(sizeof(long long int)*1000000000);
  while(1!=2)
  {           
 scanf("%lld%lld",&a,&b);
 if(a==0&&b==0)
 break;   
long long int i,j,g=0,k=0;
for(i=0;i<a;i++)
{
scanf("%lld",&c[i]);  
}
for(j=0;j<b;j++)
{
scanf("%lld",&d[j]);  
}
for(i=0;i<b;i++)
{                
for(j=k+1;j<a;j++)
{                
if((c[j]==d[i]))
{
c[j]=0;
k=j;              
g++;
}
}
}
printf("%lld\n",g);
}
return 0;
}
