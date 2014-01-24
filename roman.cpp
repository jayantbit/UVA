#include<iostream>
#include<string>
using namespace std;

string r="IVXLCDM";
int a[]={1,5,10,50,100,500,1000};


void fn(int i,int p)
{int j;
for(j=0;j<p;j++)
cout<<r[i];
}

void roman(int n)
{

int i,p;
for(i=6;i>=0;i-=2)
{

if(n<a[i])continue;

p=n/a[i];
n-=p*a[i];


if(p<=3)fn(i,p);
if(p==4)cout<<r[i]<<r[i+1];
if(p>4 && p<9){cout<<r[i+1];fn(i,p-5);}
if(p==9)cout<<r[i]<<r[i+2];
}
cout<<endl;
}


int main()
{
int n;
while(cin>>n)roman(n);
return 0;
}
