#include<iostream>
using namespace std;
int main()
{
int t,a,b,i,s,k=0;
cin>>t;
while(k++<t)
{cout<<"Case "<<k<<": ";
s=0;
cin>>a>>b;

for(i=a;i<=b;i++)
if(i&1)s+=i;
cout<<s<<endl;
}
return 0;
}
