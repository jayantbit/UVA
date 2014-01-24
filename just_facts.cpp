//568
#include<iostream>
#include<cstdio>
using namespace std;
int fn_last(int n)
{
if(n==1)return 1;
int j,k;
for(j=k=1;j<=n;j++)
{k*=j;
while(!(k%10))k/=10;
k%=100000;
}
return k%10;
}

int main()
{ int n;
    while(cin>>n)
    printf("%5d -> %d\n",n,fn_last(n));
    

    return 0;
}
