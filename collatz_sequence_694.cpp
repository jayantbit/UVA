#include<iostream>
#include<cstdio>
using namespace std;
typedef  long long int ull;

int l;

int fn(ull n)
{if(n>l)return 0;
if(n==1)return 1;
if(n%2)return 1+fn(3*n+1);
return 1+fn(n/2);
}


int main()
{
    int n,c=1;
    
    while(cin>>n>>l && n>0 && l>0)
    printf("Case %d: A = %d, limit = %d, number of terms = %d\n",c++,n,l,fn(n));
    return 0;
}
