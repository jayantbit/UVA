 #include<iostream>
#include<sstream>
#include<string>
#include<cstdio>
#include<algorithm>
using namespace std;
typedef long double ull;



int  fn(string s)
{
if(s.length()>10)return 1;
stringstream in(s);
ull c;
in>>c;
if(c>2147483647)return 1;
return 0;
}


int fn(ull c)
{
if(c>2147483647)return 1;
return 0;
}

int fn2(string a,string b,char op)
{
ull c,d;
stringstream in(a);
in>>c;

stringstream in2(b);
in2>>d;



if(op=='+' && fn(c+d))return 1;
if(op=='*' && a.length()+b.length()>10)return 1;
if(op=='*' && fn(c*d))return 1;
return 0;
}

int main()
{
string a,b;
char op;
string s;
int k=0,i,j;
while(getline(cin,s))
{
k=0;
cout<<s<<endl;

j=s.length();
for(i=0;i<j;i++)if(s[i]!=' ')break;

for(;s[i]!=' ' && s[i]!='*' && s[i]!='+';i++)a.push_back(s[i]);


for(i=0;i<j;i++)
if(s[i]=='+' ||s[i]=='*'){op=s[i];break;}

for(i=j-1;s[i]!=' ' && s[i]!='*' && s[i]!='+';i--)b.push_back(s[i]);

reverse(b.begin(),b.end());




if(fn(a)){cout<<"first number too big"<<endl;k=1;}
if(fn(b)){cout<<"second number too big"<<endl;k=1;}
if(k || fn2(a,b,op))cout<<"result too big"<<endl;


}
return 0;
}
