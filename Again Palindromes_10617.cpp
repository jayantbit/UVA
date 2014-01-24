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

ull dp[65][65]={{0}};


int main()
{
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);


int t,i,j,l,diff;
string s;
read(t);
while(t--)
{
	cin>>s;
	l=s.length();
	memset(dp,0,sizeof(dp));
	for(i=0;i<l;i++)dp[i][i]=1;
	
	
	
	
	
	for(diff=1;diff<l;diff++)
	for(i=0;i<l-diff;i++)
	{
		j=i+diff;
		if(s[i]==s[j])dp[i][j]=1+dp[i+1][j]+dp[i][j-1];
		else dp[i][j]=dp[i+1][j]+dp[i][j-1]-dp[i+1][j-1];
		
	}
	
	cout<<dp[0][l-1]<<endl;
	
}

}
