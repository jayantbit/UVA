#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

typedef long long int ull;

int *num;

int fn(ull n)
{
num=(int*)calloc(11,sizeof(int));
ull i=0;
while(n)
{i=n%10;
n/=10;
num[i]++;
if(num[i]>=3)return 0;
}
return 1;
}

int main()
{
ull i=111,m=1000000000,j;

for(;i<=m;i++)
if(!fn(i))cout<<i<<endl;


return 0;
}







