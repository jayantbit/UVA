//294
#include<iostream>
#include<cstdio>
#include<cmath>
#define read(x) scanf("%d",&x)
#define write(x) printf("%d\n",x)
using namespace std;

typedef unsigned long long int ull;

int ans[1000001]={0,1,0},pre=1;
//2 3 5 7 11 13

//2  15
void fn(int n)
{
      
     
     int d,e=1,k=0,temp=n;
     
     for(d=2;d*d<=n;d++)
     {k=0;
     while((n%d) ==0){n/=d;k++;}
     e*=(k+1);
     }
     if(n!=1)e*=2;
     
     
     if(e>=pre)
     {
              pre=e;
              ans[temp]=temp;
     }
     else ans[temp]=ans[temp-1];
     
     //ans[temp]=e;
}   
            //1 2 3 6 
            //1 2 4 8 
     
     
     
int main()
{
    int t,n;

    for(n=2;n<=1000000;n++)fn(n);
    
    read(t);
    while(t--)
    {read(n);
     write(ans[n]);
     
    } 
    return 0;
}  
