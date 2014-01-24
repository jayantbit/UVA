#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#define sz 1000
using namespace std;
char s[1001];
int l;


int dp[sz+1][sz+1];





int longest(int i,int j)
{
if(i>j)return 0;
if(dp[i][j]!=-1)return dp[i][j];
if(i>j)dp[i][j]=0;
else if(i==j)dp[i][j]=1;

else if(i<j && s[i]==s[j])dp[i][j]=2+longest(i+1,j-1);
else if(i<j && s[i]!=s[j])dp[i][j]=max(longest(i+1,j),longest(i,j-1));
return dp[i][j];
}

int main()
{
int t,i,j;
cin>>t;
cin.get();
while(t--)
{

 for (i=0;i <sz;i++)
 for (j=0;j<sz;j++)
 dp[i][j]=-1;



gets(s);

l=strlen(s);
cout<<longest(0,l-1)<<endl;
}

return 0;
}
