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

int dp[2][2][205]={{{0}}};


int main()
{
	
	
	int n,i,a1,l,b1,a2,b2,j,k,val=0;
	cin>>n;
	string s;
	
	
	while(n--)
	{
		cin>>s;
		l=s.length();
		
		memset(dp,0,sizeof(dp));
		
		dp[0][1][l-1]=1;
		dp[1][0][l-1]=1;
		dp[0][0][l-1]=((s[l-1]=='1')? 2:1);
        dp[1][1][l-1]=((s[l-1]=='0')? 2:1);	
		
		for(i=l-2;i>=0;i--)
		for(a1=0;a1<2;a1++)
		for(b1=0;b1<2;b1++)
		{
			
			a2=(s[i]-'0');
			b2=(s[i+1]-'0');
			
			dp[a1][b1][i]=	1+min(dp[a2][b2][i+2]+ (a1^a2) + (b1^b2) ,dp[a2][b1][i+1] +(a1^a2));
		}
		
		
		cout<<dp[0][0][0]<<endl;
		
		
		
	}
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
}

