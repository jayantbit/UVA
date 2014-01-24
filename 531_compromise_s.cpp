#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstdlib>
#include <string>


#define re return
#define SZ size()
#define L length()
#define vi vector<int>
#define vs vector<string>
#define REP(i,n) for(int i=0;i<n;i++)
#define KEP(i,a,b) for(int i=a;i<=b;i++)
#define MEP(i,a,b) for(int i=a;i>=b;i--)
#define Sort(a) sort(a.begin(),a.end())
using namespace std;
#define MAX 1000
int c[MAX][MAX];
char b[MAX][MAX];
bool flag;

int m,n;

void printlcs(int i,int j,vs mvp)
{
if(i==0||j==0) return ;
else
{
if(b[i][j]=='D')
{
printlcs(i-1,j-1,mvp);
if(!flag){ cout<<mvp[i-1]; flag=true;}
else cout<<" "<<mvp[i-1];
}
else if(b[i][j]=='U')
printlcs(i-1,j,mvp);
else printlcs(i,j-1,mvp);
}
}

int main()
{

string str1,str2;
vs sec1,sec2;

while(cin>>str1)
{
flag=false;
string s1,s2;
if(str1=="#")
while(cin>>str2)
{
if(str2=="#") break;
sec2.push_back(str2);
}

else
{
sec1.push_back(str1);
while(getline(cin,str1))
{
if(str1=="#") break;
sec1.push_back(str1);
}
while(getline(cin,str2))
{
if(str2=="#") break;
sec2.push_back(str2);
}
}




m=sec1.SZ;
n=sec2.SZ;

for(int i=1;i<=m;i++) c[i][0]=0;
for(int j=0;j<=n;j++) c[0][j]=0;

for(int i=1;i<=m;i++)
for(int j=1;j<=n;j++)
{
if(sec1[i-1]==sec2[j-1])
{
c[i][j]=c[i-1][j-1]+1;
b[i][j]='D';
}
else if(c[i-1][j]>=c[i][j-1])

{
c[i][j]=c[i-1][j];
b[i][j]='U';
}
else
{
c[i][j]=c[i][j-1];
b[i][j]='L';
}
}
printlcs(m,n,sec1);
sec1.clear();
sec2.clear();
cout<<endl;

}
return 0;
}
