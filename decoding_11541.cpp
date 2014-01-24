#include<iostream>
#include<string>
#include<sstream>
#include<cstdio>
using namespace std;


int main()
{
string str;
char ch;
int n,i,j=0;
cin>>n;
getchar();
while(getline(cin,str))
{stringstream s(str);
cout<<"Case "<<++j<<": ";
while(s>>ch>>n)for(i=0;i<n;i++)cout<<ch;
cout<<endl;
}
return 0;
}

