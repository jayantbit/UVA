#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

typedef long long int ull;
ull *a;

int main()
{
ull n,j,m,i,ans,t;
cin>>t;
while(t-- && cin>>n)
{

m=0;
ans=0;
a=(ull*)calloc(10001,sizeof(ull));
while(n--)
{
cin>>j;
a[j]++;
m=max(m,j);
}

for(i=0;i<=m;i++)
ans=max(ans,i*a[i]);

cout<<ans<<endl;
}


return 0;
}
