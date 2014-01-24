#include<iostream>
using namespace std;
int main()
{
int sz = 3,i;
int coinSizes[] = { 1, 2,3};
int ways[201]={1,0};

    
     for ( i = 0; i <sz; i++) 
    for (int j = coinSizes[i]; j <2*coinSizes[i]; j++)
    ways[j] += ways[j - coinSizes[i]];
    

for(i=0;i<7;i++)cout<<ways[i]<<" ";


system("pause");
}
