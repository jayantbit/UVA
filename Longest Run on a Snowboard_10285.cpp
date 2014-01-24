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


int grid[100][100]={{0}},r,c;
int rem[100][100]={{0}};

int fn(int i,int j)
{

	if(rem[i][j])return rem[i][j];
	int ans=0;
	if(j+1<c  && grid[i][j+1]>grid[i][j])ans=max(ans,fn(i,j+1));
	if(j-1>=0  && grid[i][j-1]>grid[i][j])ans=max(ans,fn(i,j-1));
	if(i+1<r  && grid[i+1][j]>grid[i][j])ans=max(ans,fn(i+1,j));
	if(i-1>=0  && grid[i-1][j]>grid[i][j])ans=max(ans,fn(i-1,j));
    	
	return (rem[i][j]=1+ans);
	
}

int main()
{
int t,i,j;
read(t);
string s;
while(t--)
{
	memset(grid,0,sizeof(rem));
	memset(rem,0,sizeof(rem));
cin>>s;
read(r);
read(c);
for(i=0;i<r;i++)
for(j=0;j<c;j++)
read(grid[i][j]);

int ans=0;
for(i=0;i<r;i++)
for(j=0;j<c;j++)
if(rem[i][j]==0)
{
	fn(i,j);
	ans=max(ans,rem[i][j]);
}

printf("%s: %d\n",s.c_str(),ans);

}
}

