#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int n;
double a,b;
while(cin>>n && n)
{n=(n-1960)/10;
n+=2;
n=1<<n;
a=(double)n*log(2.0);
for(b=0,n=2;b<=a;b+=log(n++));
cout<<n-2<<endl;
}
return 0;
}


