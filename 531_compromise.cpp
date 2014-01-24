#include<iostream>
#include<cmath>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<cstdlib>
using namespace std;
 
vector <string>a,b,ans;
vector <string>:: iterator it;
int **c;


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
{
int x,y,i,j,k=1;
string  t;
do
{
while(cin>>t && t!="#" && k)a.push_back(t);

while(cin>>t && t!="#")b.push_back(t);


x=a.size();
y=b.size();


c=(int**)calloc(x,sizeof(int*));
for(i=0;i<x;i++)c[i]=(int*)calloc(y,sizeof(int));

for(i=0;i<x;i++)
for(j=0;j<y;j++)
lcs(i,j);

  
i=x-1;j=y-1;



while(i>=0 && j>=0 && c[i][j]>0)
{
if(a[i]==b[j])
{ans.push_back(a[i]); i--;j--;}

else if(get(i-1,j)>get(i,j-1))i--;
else j--;
}

reverse(ans.begin(),ans.end());


for(it=ans.begin();it!=ans.end();it++)
{
if(it!=ans.begin())cout<<" ";
cout<<*it;
}



cout<<endl;

ans.clear();
a.clear();
b.clear();
k=1;

if(cin>>t)
{
if(t=="#")k=0;
else a.push_back(t);
}

}while(a.size() || !k);
 

 return 0;
}
