#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

double fn(double h1,double r1,double R1,double h2,double r2,double R2)
{
       
       if(R1>=R2)
        return abs(h1*(r2-r1)/(R1-r1));
        
        return abs((R2-R1)*h2/(R2-r2));
}

int main()
{int t;


double h1,r1,R2,a,b,c;

while(cin>>t)
{  
int f=0;
double ans=0;
          
          while(t--)
          {
          cin>>a>>b>>c;
          
           if(f>=1)
           {
               
               ans+=fn(h1,r1,R2,a,b,c);
           }   
          
           h1=a;
           r1=b;
           R2=c;
           f++;
           
          
         }
          ans+=h1;
          printf("%0.8lf\n",ans);
}         
          


return 0;
}       
