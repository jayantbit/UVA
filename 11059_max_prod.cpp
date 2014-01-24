#include<iostream>
#include<vector>
using namespace std;
vector <int> v;

int main()
{
int n,a,i,j,k,b=1;
long long int  d,max;
while(cin>>n)
{
for(i=0;i<n;i++)
{
cin>>a;
v.push_back(a);
}

max=0;
for(i=0;i<n;i++)
for(j=i;j<n;j++)
{
for(k=i,d=1;k<=j;k++)d*=v[k];
if(d>max)max=d;
}
cout<<"Case #"<<b<<": The maximum product is "<<max<<"."<<endl<<endl;  
v.clear();
b++;
}
return 0;
}
  
