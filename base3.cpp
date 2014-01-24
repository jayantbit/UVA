#include<iostream>
using namespace std;
void fn(int n)
{if(n)
{fn(n/3);
cout<<n%3;
}
}
int main()
{int n;
while(cin>>n && (n>=0))
{
if(n)fn(n);
else cout<<"0";
cout<<endl;
}
return 0;
}
    
