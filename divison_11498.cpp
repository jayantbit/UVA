#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
int t,i,x,y,n,m;

while(cin>>t && t)
{
cin>>n>>m;
for(i=0;i<t;i++)
{cin>>x>>y;
x-=n;
y-=m;
if(!x || !y){cout<<"divisa"<<endl;continue;}
else if(y>0)cout<<"N";
else if(y<0)cout<<"S";

if(x>0)cout<<"E";
else if(x<0)cout<<"O";
cout<<endl;
}
}
return 0;
}
