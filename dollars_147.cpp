#include<iostream>
#include<cmath>
#include<cstdio>
#define mx 30001
#define EPS 1e-13

using namespace std; 
 
 int coins[11]={10000,5000,2000,1000,500,200,100,50,20,10,5};
 unsigned long long   int ways[mx]={1,0};
    int main()
    {    int n,i,j;      
         double d,t;   
            for(i=0;i<11;++i)
                 {
                                  for(j=coins[i];j<mx;++j)
                                  ways[j]+=ways[j-coins[i]];
                 }
  
    
    
    while(cin>>d)
    {             if ( fabs(d) < EPS ) break;
                 
                 t=d*100 +0.5;
                 printf("%6.2lf",d);
                 printf("%17llu\n",ways[(int)t]); 
     }
    return 0;
    }            
