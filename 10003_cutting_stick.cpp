#include<iostream>
#include<cmath>
#include<cstdlib>
#include<vector>
using namespace std;

vector <int> a;

int main()
{
int i,j,k,l,n,m;


while(cin>>n && n)
{
             cin>>m;
             a.push_back(0);
             for(i=0;i<m;i++){cin>>j;a.push_back(j);}
             a.push_back(n);
m=a.size();

int dp[55][55]={{0}};
    for(i=m-2;i>=0;i--)
    {
    for(j=2;j<=m-i;j++)
    {
    for(k=1,l=INT_MAX;k<=j-1;k++)l=min(l,dp[i][k]+dp[i+k][j-k]);
    dp[i][j]=l+a[i+j]-a[i];
    }
    }
cout<<"The minimum cutting is "<<dp[0][m-1]<<"."<<endl;
a.clear();
}


return 0;
}
