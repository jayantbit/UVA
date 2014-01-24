#include <stdio.h>
#include <malloc.h>
#include <math.h>

int max(int ,int);
int divisors(int );
int *prime;


int main()
{
int a,b,i,n=1000000,j,l=1,v,x,z;    
prime=(int *)malloc(1000000*sizeof(int));
for(i=0;i<1000000;i++)
prime[i]=1;


prime[0]=0;
prime[1]=0;
for(i=2;i<sqrt(n);i++)
{
if(prime[i]==1)
{
for(j=i*i;j<n;j=j+i)
{
prime[j]=0;                                   
}
}
else 
continue;
}

scanf("%d",&z);
for(x=0;x<z;x++)
{
l=1;                
scanf("%d",&a);
for(j=1;j<=a;j++)
{                
b=divisors(j);
l=max(l,b);
if(l==b)
v=j;
}
printf("%d\n",v);
}
return 0;    
}

int divisors(int a)
{
int t=1,s,i,v;
v=a;

if(prime[a]==1)
return 2;





for(i=2;i*i<=a;i++)
{


s=1;                 
if(prime[i]==1)
{

label:
if(a%i==0)
{               
s++;
a=a/i;
goto label;
}

}
t=t*s;                 
}
 if(a!=1)t*=2;  
return t;
} 

int max(int l,int t)
{
    
if(l>t)
return l;
else
return t;     
}
