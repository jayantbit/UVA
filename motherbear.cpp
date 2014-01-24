#include<iostream>
#include<cstdio>
#include<cctype>
#include<cstring>
#include<vector>
using namespace std;

vector <char> x,y;
char a[50000]={0};
int main()
{

int i,l;

while(gets(a))
{
if(!strcmp(a,"DONE"))break;
l=strlen(a);
for(i=0;i<l;i++)
if(isalpha(a[i]))
{if(a[i]>'A' && a[i]<'Z')a[i]+=32;
x.push_back(a[i]);
}


l=x.size();
for(i=0;i<l;i++)
y.push_back(x[l-1-i]);



for(i=0;i<l;i++)if(x[i]!=y[i])break;


if(i==l)cout<<"You won't be eaten!";
else cout<<"Uh oh..";
cout<<endl;
x.clear();
y.clear();
}
             
return 0;
}
