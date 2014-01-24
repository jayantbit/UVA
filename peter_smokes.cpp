#include<iostream>
using namespace std;
int b,k;

int fn(int n)
{if(!n)return 0;
if(b)b%=k;
b+=n;
return n+fn(b/k);
}

int main()
{
int n;
while(cin>>n>>k)
{b=0;
cout<<fn(n)<<endl;
}
return 0;
}
