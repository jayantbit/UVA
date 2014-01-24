#include<iostream>
#include<cstdlib>
using namespace std;

int mx,mi,mj,t,*c,*num;

void set(int i,int j)
{int x;
x=c[j];
if(i)x-=c[i-1];
if(!t || x>mx || (x>=mx && j-i<mj-mi)){mx=x;mi=i;mj=j;t++;}
}

int main()
{
int n,i,j,k,s,l;

while(cin>>n && n)
{
t=s=l=0;
c=(int*)calloc(n,sizeof(int));
num=(int*)calloc(n,sizeof(int));



for(i=0;i<n;i++)
{cin>>j;
if(!j)continue;
num[l]=j;
s+=j;
c[l]=s;
for(k=0;k<=l;k++)set(k,l);
l++;
}

if(!l)cout<<"0";
else
for(i=mi;i<=mj;i++)
{if(i-mi)cout<<" ";
cout<<num[i];
}

cout<<endl;
}

}



