#include<iostream>
#include<cmath>
#include<cstdio>
#define mx 30001
using namespace std; 
 
 int coins[5]={50,25,10,5,1};
 long long   int ways[mx]={1,0};
    int main()
    {    int n,i,j;      
            for(i=0;i<5;++i)
                 {
                                  for(j=coins[i];j<mx;++j)
                                  ways[j]+=ways[j-coins[i]];
                 }
  
    while(cin>>n)
    if(ways[n]>1)printf("There are %lld ways to produce %d cents change.\n",ways[n],n);
    else printf("There is only 1 way to produce %d cents change.\n",n);

    return 0;
    }            
