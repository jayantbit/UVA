#include<iostream>
using namespace std;
typedef  long long int ull;

int main()
{ull a,b;
int t;
cin>>t;
while(t--)
{cin>>a>>b;
a-=b;
if(a<0)cout<<"<";
else if(a>0)cout<<">";
else cout<<"=";
cout<<endl;
}
return 0;
}
