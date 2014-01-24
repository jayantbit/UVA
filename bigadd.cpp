#include<iostream>
#include<string>
using namespace std;

string add(string a,string b)
{ int x=a.length(),y=b.length(),z;
string temp;
if(x<y){z=x;x=y;y=z;temp=b;a=b;b=temp;}

int rem=0,t;
while(y--)
{x--;
cout<<a[x]<<" "<<a[y]<<" "<<rem<<endl;
t=(a[x]-48)+(b[y]-48);
a[x]=(char)(t%10 +rem +48);
rem=t/10;
}

if(rem && x)
{x--;
t=(a[x]-48)+(rem);
a[x]=(char)(t%10 +48);
rem=t/10;
}


if(rem)
{string t;
t+=rem+48;
t+=a;
a=t;
}
return a;
};

int main()
{
string a,b;
cin>>a;
while(cin>>b && b[0]-48)a=add(a,b);
cout<<a;
system("pause");
}
