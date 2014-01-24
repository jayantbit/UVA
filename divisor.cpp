//294
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

typedef unsigned long long int ull;

int main()
{
    int t;
    ull a,b,d,e,max,maxn;
    double sqr;
    cin>>t;
    while(t--)
    {cin>>a>>b;
    printf("Between %llu and %llu, ",a,b);
     
     max=0;
     for(;a<=b;a++)
     {sqr=sqrt(a);
     e=0;
     for(d=1;d<=(ull)sqr;d++)e+=2*(!(a%d));
     if(floor(sqr)==ceil(sqr))e--;
     if(e>max){max=e;maxn=a;}
     }
     printf("%llu has a maximum of %llu divisors.\n",maxn,max);
    } 
    return 0;
}  
