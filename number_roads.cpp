#include<iostream>
#include<cmath>
using namespace std;

int fn(int a,int b)
{
if(a<=b)return 0;
return 1+fn(a-b,b);
}

int main()
{
int a,b,c=1,d;
while(cin>>a>>b && (a+b))
{cout<<"Case "<<c++<<": ";
d=fn(a,b);
if(d>26)cout<<"impossible";
else cout<<d;
cout<<endl;
}
return 0;
}
