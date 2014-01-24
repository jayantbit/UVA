#include<iostream>
#include<cstring>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<sstream>
#include<cstdio>
#include<cctype>
#include <fstream>
#include<vector>
#include<cmath>
using namespace std;

vector <int> v;
int dp[101][50001]={0};

int get(int i,int j)
{if(i<0 || j<0)return 0;
return dp[i][j];
}

int main()
{
    int m,s,i,j,n,ans,t;
    cin>>t;
    while(t--)
    {
    cin>>m;
    
    n=m;
    s=0;
    
    while(m--)
    {
              cin>>i;
              s+=i;
              v.push_back(i);
    }
    
    
    
    for(i=0;i<n;i++)
    for(j=0;j<=s/2;j++)dp[i][j]=0;
    
    for(j=1;j<=s/2;j++)
   
    {
     //cout<<endl;
     
                   for(i=0;i<n;i++)
                  {
                     if(v[i]>j)dp[i][j]=get(i-1,j);
                     else dp[i][j]= max(get(i-1,j),v[i]+get(i-1,j-v[i]));
                     //cout<<dp[i][j]<<" ";
                  }
    
   }

   ans=dp[n-1][s/2];
   cout<<abs((s-ans)-ans)<<endl;
   v.clear();
   }

return 0;



}
    
    
    
    
    
    
    
    
    
    
