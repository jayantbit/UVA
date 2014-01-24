#include<iostream>
#include<cmath>
#include<cstdio>
#include<map>
#define mx 800
using namespace std;

int val[367][800]={{0}};
map <int,int> freq;

void  fn(int n)
{ 
int j;
for(j=0;j<mx;j++)val[n][j]=val[n-1][j]*n;

for(j=0;j<mx-1;j++)
{val[n][j+1]+=val[n][j]/10;val[n][j]%=10;}

}

int main()
{ val[1][0]=1;
int i,n;
for(i=2;i<=366;i++)fn(i);

while(cin>>n && n)
{
for(i=mx-1;!val[n][i];i--);
for(;i>=0;i--)freq[val[n][i]]++;


printf("%d! --\n",n);
printf("   (%d)%5d",0,freq[0]);
for(i=1;i<5;i++)printf("    (%d)%5d",i,freq[i]);
cout<<endl;
printf("   (%d)%5d",5,freq[5]);
for(i=6;i<10;i++)printf("    (%d)%5d",i,freq[i]);
cout<<endl;
freq.clear();
}

return 0;
}







