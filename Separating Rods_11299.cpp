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


int v[50000]={0};
int dp[50000][1000]={{0}};
int ways[50000][1000]={{0}};

int main()
{
int n,k,i,j,l,p,q,mx,ss,r,temp;
while(scanf("%d%d",&n,&k)!=EOF)
{
	for(i=0;i<n;i++)
	read(v[i]);
	 			
	
	
	dp[n-1][0]=v[n-1];
	ways[n-1][0]=1;
	
    ss=0;
	for(i=n-2;i>=0;i--)
	{
		j=min(k,n-1-i);
		for(l=0;l<=j;l++)
		{
		 				 if(!l){dp[i][0]=v[i]+dp[i+1][0];ways[i][0]=1;}
						 else {
						 	     mx=max(v[i],dp[i+1][l-1]);
								 ss=v[i];
								 p=i+1;
								 q=mx;
								 r=ways[i+1][l-1];
								// cout<<q<<endl;
								 
								 while(p<=n-1-l && ss+v[p]<=q)
								 {
								 	
								    ss+=v[p];
								 	temp=max(ss,dp[p+1][l-1]);
								    if(temp==q)r+=ways[p+1][l-1];
								    else if(temp<q)
								                   {
								                    
													r=ways[p+1][l-1];	
								                    q=temp; 
												   }
								 	
							 	p++; 
							    }
								 
								 dp[i][l]=q;
								 ways[i][l]=r;
								// if(l)ways[i][l]+=ways[i][l-1];
							   }
							   //cout<<i<<" "<<l<<" "<<ways[i][l]<<endl;
						 
						 
		}
	}
	for(i=0;i<=k;i++)
	cout<<dp[0][i]<<" "<<ways[0][i]<<endl;
}
	
}


