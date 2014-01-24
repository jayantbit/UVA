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
#define INF INT_MAX
typedef  long long int ull;

int dp[10001]={0};
vector <int> squares;


int main()
{

int i=1,t,n;
for(i=1;i*i<=10000;i++)
squares.push_back(i*i);
//dp[0]=1;
dp[1]=1;


for(i=2;i<=10000;i++)
{
	int k=squares.size()-1;
	int ans=INF;
	while(k>=0)
	{
	if(squares[k]<=i)
	ans=min(ans,dp[i-squares[k]]);
	k--;
    }
	dp[i]=ans+1;
	
}

read(t);
while(t--)
{
	read(n);
	write(dp[n]);
}

return 0;

}

