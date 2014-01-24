using namespace std;
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
#include<cassert>
#define read(x) scanf("%d",&x)
#define write(x) printf("%d\n",x)
#define assign(x,n) x=(int*)calloc(n,4)
#define rep(i,n) for(i=1;i<=n;++i)
#define max(a,b) ((a)>(b))?(a):(b)
typedef  long long int ull;
typedef pair<int,int> pr;



int dp[1000][1000]={{0}},n,m;
string x,y;


int min3(int a,int b,int c)
{
	
	return min(min(a,b),c);
}

int main()
{
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
int i,j;


while(cin>>n>>x>>m>>y)
{
	
      for(j=0;j<=m;j++)
	  dp[0][j]=j;
	  
	  for(i=0;i<=n;i++)
	  dp[i][0]=i;
	  
	  for(i=1;i<=n;i++)
	  for(j=1;j<=m;j++)
	  if(x[i-1]==y[j-1])dp[i][j]=dp[i-1][j-1];
	  else dp[i][j]=1+min3(dp[i-1][j-1],dp[i-1][j],dp[i][j-1]);
	  
	  write(dp[n][m]);
	  
}

}

