#include<iostream>
#include<cmath>

using namespace std;
int main()
{

int sum;
int n,j,ans,t=0;

cin>>t;
while(t--)
{
cin>>n;
sum=0;
ans=0;

while(n-- && cin>>j)
{
sum+=j;
ans=min(ans,sum);
}

cout<<1-ans<<endl;
}

return 0;
}
