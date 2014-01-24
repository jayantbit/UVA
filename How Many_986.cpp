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
#define read(x) scanf("%d",&x)
#define write(x) printf("%d\n",x)
#define assign(x,n) x=(int*)calloc(n,4)
#define rep(i,n) for(i=1;i<=n;++i)
#define max(a,b) ((a)>(b))?(a):(b)
typedef  long long int ull;

int r,k,n;

int dp[41][21][21][2];

int ways(int x,int y,int z,int pre=0)
{
	
	int ans=0;
	if(x==2*n)return (y==0 && z==0);
	if(y>n)return 0;
	if(y!=0)
	{
		if(y==k && pre==1)
		{
			if(z!=0)ans+=dp[x+1][y-1][z-1][0];
		}
		else ans+=dp[x+1][y-1][z][0];
	}
	
	ans+=dp[x+1][y+1][z][1];
	//cout<<x<<" "<<y<<" "<<z<<" "<<ans<<endl;
	return ans;
}


int fn()
{
	dp[2*n][0][0][0]=1;
	
	int x,y,z,pre;
	for(x=2*n-1;x>=0;x--)
	for(y=0;y<=n;y++)
	for(z=0;z<=r;z++)
	for(pre=0;pre<2;pre++)
	dp[x][y][z][pre]=ways(x,y,z,pre);
	
	return dp[0][0][r][0];
		
	
}


int main()
{
	
	
	while(scanf("%d%d%d",&n,&r,&k)!=EOF)
	{
	memset(dp,0,sizeof(dp));
	write(fn());
    }
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);

}

