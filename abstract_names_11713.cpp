#include<iostream>
#include<vector>
#include<string>
using namespace std;

int isvow(char ch)
{switch(ch)
{
case  'a':return 1;
case  'e':return 1;
case  'i':return 1;
case  'o':return 1;
case  'u':return 1;
}
return 0;
}

int comp(string a,string b)
{if(a.length()!=b.length())return 0;
int i,j=a.length();
for(i=0;i<j;i++)
if(a[i]!=b[i] && !(isvow(a[i])&& isvow(b[i])))return 0;
return 1;
}

int main()
{string a,b;
int n;
cin>>n;
while(n--)
{cin>>a>>b;
if(comp(a,b))cout<<"Yes";else cout<<"No";
cout<<endl;
}
return 0;
}
