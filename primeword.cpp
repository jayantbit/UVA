#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int prime(int n)
{if(n==1)return 1;
for(int j=2;j<n;j++)
if(!(n%j))return 0;
return 1;
}
int main()
{ string st;
int s=0,i,l;
char ch;


while(cin>>st)
{
s=0;l=st.length();
for(i=0;i<l;i++)
{ch=st[i];
if(ch>='a' && ch<='z')s+=ch-'a'+1;
else s+=ch-'A'+27;
}
if(prime(s))cout<<"It is a prime word.";
else cout<<"It is not a prime word.";
cout<<endl;
}


return 0;
}
