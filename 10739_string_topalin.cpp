#include<iostream>
#include<string>
#include<cmath>
#include<cstdio>
using namespace std;

string s;
int l;
int dp[1001][1001]={0};





int fn(int i,int j)
{
if(i>=j)return 0;
if(dp[i][j]!=-1)return dp[i][j];

else if(s[i]==s[j])dp[i][j]=fn(i+1,j-1);
else if(s[i]!=s[j])dp[i][j]=1+min(min(fn(i+1,j-1),fn(i+1,j)),fn(i,j-1));
return dp[i][j];
}





int main()
{
int t,l,i,j,tt=1;
cin>>t;
while(t--)
          {

          cin>>s;
          l=s.length();

          for (i=0;i<=l;i++)
          for (j=0;j<=l;j++)
          dp[i][j]=-1;

          printf("Case %d: %d\n",tt++,fn(0,l-1));
          }
return 0;
}

