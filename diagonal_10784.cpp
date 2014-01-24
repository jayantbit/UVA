#include<iostream>
#include<cmath>
using namespace std;

int main()
{
double n;
int j=0;
while(cin>>n && n)
{cout<<"Case "<<++j<<": "<<(unsigned long long int)ceil((3 +sqrt(9+8*n))/2.0)<<endl;}
return 0;
}
