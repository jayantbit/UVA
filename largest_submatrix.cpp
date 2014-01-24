#include<iostream>
#include<cmath>
#include<cstdio>
#include<string>
#include<vector>
using namespace std;
 
vector  <int> a,b;
int c[1001][1001]={{0}};

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
string str;
int n,i,j;
char p;
do 
{
    getline(cin, str);
    j=str.length();
    for(i=0;i<j;i++)
    {a.push_back(str[i]-'0');b.push_back(1);}

}while(j);
p=a.size();
 
 for(i=0;i<p;i++)
 for(j=0;j<p;j++)lcs(i,j);
  for(i=p-1;i>=0;i--)
  if(get(i,i)%2==0)
  {cout<<get(i,i)<<endl;break;}


a.clear();
b.clear();
system("pause");
return 0;
} 
