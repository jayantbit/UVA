#include<iostream>
#include<cmath>
using namespace std;

int main()
{
double n,p,d,x;
int i,j;
while(cin>>n>>p)
{
d=pow(p,1/n);
for(j=(int)d+100;;j--)
{x=pow(j,n);
if(x==p)break;
}
cout<<j<<endl;
}
}
