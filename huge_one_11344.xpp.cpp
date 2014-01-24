#include<string>
#include<iostream>
#include<cstdio>
using namespace std;

int mod(string s,int m)
{
int rem=0,i=0,j=s.length();
for(i=0;i<j;i++)
rem=(rem*10+ (int)s[i]-48)%m;
return rem;
}

int main()
{
string s;
int n,i,k,t;

cin>>t;

while(t--)
{
getchar();
getline(cin,s);

cin>>n;
k=1;
while(n--)
{cin>>i;
if(mod(s,i)!=0)k=0;
}
cout<<s<<" - ";
if(k)cout<<"Wonderful.";
else cout<<"Simple.";
cout<<endl;
}
return 0;
}
