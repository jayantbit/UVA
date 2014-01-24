#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
using namespace std;
 
char a[101],b[101];
int c[101][101]={{0}};

int get(int x,int y)
{ if(x<0 || y<0)return 0;
 return c[x][y];
}  
 
void lcs(int x,int y)
{ 
if(a[x]==b[y])c[x][y]=get(x-1,y-1)+1;
else c[x][y]=max(get(x-1,y),get(x,y-1));
}
int main()
{int x,y,i,j,k=1;
    while(gets(a))
  {x=strlen(a);
  if(a[0]=='#')break;
  gets(b);
  y=strlen(b);
  for(i=0;i<x;i++)
  for(j=0;j<y;j++)
  lcs(i,j);
  cout<<"Case #"<<k++<<": you can visit at most "<<get(x-1,y-1)<<" cities."<<endl;
  
 }
 
 return 0;
}
