#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    int coins[5]={50,25,10,5,1};


 long long   int ways[7490]={1,0};
            
            for(i=0;i<5;++i)
                 {
                                  for(j=coins[i];j<7490;++j)
                                  ways[j]+=ways[j-coins[i]];
                 }
    
    while(cin>>n)
    {
                 
                 cout<<ways[n]<<endl;
    }
    return 0;
}
