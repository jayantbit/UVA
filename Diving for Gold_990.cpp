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

int val[31]={0};
int cost[31]={0};
int dp[31][1001]={0};
int decision[31][1001]={0};


int main()
{
int t,w,i,j,k,n,f=0;

//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
while(scanf("%d%d",&t,&w)!=EOF)
{
	if(f)cout<<endl;
	f=1;
	read(n);
	for(i=0;i<n;i++)
	{
		
		read(cost[i]);read(val[i]);
		cost[i]*=3*w;
	}

memset(dp,0,sizeof(dp));
memset(decision,0,sizeof(decision));

for(j=cost[0];j<=t;j++){
						dp[0][j]=val[0];
						decision[0][j]=2;
					//	cout<<".";
					   }
						
						


for(i=1;i<n;i++)
{
	for(j=0;j<=t;j++)
	if(cost[i]>j){dp[i][j]=dp[i-1][j];decision[i][j]=0;}
	else {
	        k=dp[i-1][j-cost[i]]+val[i];
			if(dp[i-1][j]>k)
			{
			  dp[i][j]=dp[i-1][j];
			  decision[i][j]=1;

            }
            else 
            {
            	dp[i][j]=k;
            	decision[i][j]=2;
            }
		  }
}
cout<<dp[n-1][t]<<endl;
k=t;
i=n-1;
vector<int> order;
while(i>=0)
{
	if(decision[i][k]==2) {
		                    k-=cost[i];
		                    order.push_back(i);
		                    //cout<<val[i]<<" ";
							
                          }
    i--;                       
}
cout<<order.size()<<endl;
for(i=order.size()-1;i>=0;i--)
cout<<cost[order[i]]/(3*w)<<" "<<val[order[i]]<<endl;

}

return 0;
}

