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
cout<<mod("123456",12);
system("pause");
}
