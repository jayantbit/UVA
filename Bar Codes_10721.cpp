#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<vector>
#include<bitset>
#include<map>
#include<set>
#include<climits>
#include<algorithm>
#include<utility>
#include<cstdlib>
#include<cctype>
#include<queue>
#include<sstream>
#define read(x) scanf("%d",&x)
#define write(x) printf("%d\n",x)
#define assign(x,n) x=(int*)calloc(n,4)
#define rep(i,n) for(i=1;i<=n;++i)
#define max(a,b) ((a)>(b))?(a):(b)
typedef  long long int ull;
using namespace std;
typedef  pair<int,int> pr;

ull dp[51][51][51]={{{0}}};
// 7 2 4
void st()
{
  int i,j,k,m,sum,n;
  for(i=1;i<=50;i++)
  for(j=1;j<=i;j++)
  dp[j][1][i]=1;
  
  for(k=2;k<=50;k++)
  for(m=1;m<=50;m++)
  for(n=1;n<=50;n++)
  for(i=1;i<=m;i++)
  if(n-i >0)dp[n][k][m]+=dp[n-i][k-1][m];
  
}

int fn(int n,int k,int m)
{
    if(k<=0 || n<=0)return 0;
    if(k==1 && n<=m)return 1;
    if(dp[n][k][m])return dp[n][k][m];
    int i,sum=0;
    for(i=1;i<=m;i++)sum+=fn(n-i,k-1,m);
    return dp[n][k][m]=sum;
}
    


int main()
{
 
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
//cout<<fn(7,2,4)<<endl;
st();
int a,b,c;
while(cin>>a>>b>>c)
cout<<dp[a][b][c]<<endl;

return 0;
}
