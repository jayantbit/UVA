#include<iostream>
#include<iomanip>
using namespace std;
typedef long long int ull;


void fn(ull n)
{
    ull i;

    for(i=2;i*i<=n;i++)
    while(n%i==0)
    {n/=i;cout<<"    "<<i<<endl;}
    
   if(n!=1)cout<<"    "<<n<<endl;
   cout<<endl;
}

int main()
{ ull n;
while(cin>>n && n>0)fn(n);
return 0;
}
