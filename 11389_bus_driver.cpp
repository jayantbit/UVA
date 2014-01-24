#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

vector <int> a,b;


int main()
{
int n,d,r,i,j;
long long int  sum;
while(cin>>n>>d>>r  &&(n+d+r))
{

for(i=0;i<n;i++)
{cin>>j;
a.push_back(j);
}
for(i=0;i<n;i++)
{cin>>j;
b.push_back(j);
}

sort(a.begin(),a.end());
sort(b.begin(),b.end());

for(i=0,sum=0;i<n;i++)sum+=max(0,a[i]+b[n-1-i]-d);
cout<<sum*r<<endl;
a.clear();
b.clear();
}
return 0;
}


