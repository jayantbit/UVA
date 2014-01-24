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

int p[100]={0},f[100]={0};
int dp[100][10201]={{0}};
int profit[100][10201]={{0}};

/*
1900 3
2000 5
1950 1
101 1
*/


int main()
{
	int w,n,i,j,k,ans;
	while(cin>>w>>n)
	{
		
		//w+=200;
		
	
		
		memset(dp,0,sizeof(dp));
		memset(profit,0,sizeof(profit));
	
		
		for(i=0;i<n;i++)
		{
			read(p[i]);read(f[i]);
			
		}
		
		if(w==0 || n==0){write(0);continue;}
		
		for(j=p[0];j<=w;j++)dp[0][j]=f[0];
		
		
		for(i=1;i<n;i++)
		for(j=0;j<=w;j++)
		{
		
		if(p[i]>j)dp[i][j]=dp[i-1][j];
		else dp[i][j]=max(dp[i-1][j],dp[i-1][j-p[i]]+f[i]);
		}
		
		
		ans=dp[n-1][w];
		w+=200;
		
		memset(dp,0,sizeof(dp));
		
		dp[0][p[0]]=1;
		dp[0][0]=1;
		profit[0][p[0]]=f[0];
		
		for(i=1;i<n;i++)
		for(j=0;j<=w;j++)
		{
			if(p[i]>j){     dp[i][j]=dp[i-1][j];
			                profit[i][j]=profit[i-1][j];
			          }
		   else {
		          int temp=dp[i-1][j-p[i]];
		          if(temp==0){dp[i][j]=dp[i-1][j];profit[i][j]=profit[i-1][j];}
		          else
		            {
		              temp=profit[i-1][j-p[i]]+f[i];
				   
				   if(temp>profit[i-1][j]) {
				                       dp[i][j]=1;
				                       profit[i][j]=temp;
				                      }
                   else{
                   	     dp[i][j]=dp[i-1][j];
                   	     profit[i][j]=profit[i-1][j];
                       }        
		
		            }
		        }
        }
		
		for(j=w;j>2000;j--)
		{
		ans=max(ans,profit[n-1][j]);
	    } 
		
		write(ans);
	}


//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
}

