#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<vector>
using namespace std;
 
vector <int>a,b;
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
{int i,j;
int m,n,p=1;
    
while(cin>>m>>n && (m+n))
  {
  for(i=0;i<m;i++)
   {cin>>j;
   a.push_back(j);
   }
  
  for(i=0;i<n;i++)
   {cin>>j;
   b.push_back(j);
   }
  
  for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  lcs(i,j);
  
  cout<<"Twin Towers #"<<p++<<endl<<"Number of Tiles : "<<get(m-1,n-1)<<endl<<endl;
  a.clear();
  b.clear();
 }
 
 return 0;
}
