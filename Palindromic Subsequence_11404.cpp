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

int dp[1001][1001]={{0}};
char s[1001];
int l;


void fn(int x,int y)
{
if(x<0 || y<0 || x>=l || y>=l || x>y)return;

int i,j,f1,f2,p1,p2,mx=-1,len;
char a;
	
	for(a='a';a<='z';a++)
	{
		f1=f2=0;
		
		for(i=x;i<=y;i++)
		if(s[i]==a)
		{
			f1=1;
			break;
		}
		
		for(j=y;j>=x;j--)
		if(s[j]==a)
		{
			f2=1;
			break;
		}
		
		if(!f1 && !f2)continue;
		if(i==j)
		{
			len=1;
		}
		else len=2+dp[i+1][j-1];
		
		if(len>mx)
		{
			mx=len;
			p1=i;
			p2=j;
		}
		
		
	}
	
	if(mx==1)printf("%c",s[p1]);
	else
	{
		printf("%c",s[p1]);
		fn(p1+1,p2-1);
		printf("%c",s[p1]);
	}

}


int main()
{

//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);


int t,i,j,diff;


while(scanf("%s",&s)!=EOF)
{
	
	l=strlen(s);
	memset(dp,0,sizeof(dp));
	

	for(i=0;i<l;i++)dp[i][i]=1;
 
    
	
	for(diff=1;diff<l;diff++)
	for(i=0;i<l-diff;i++)
	{
		j=i+diff;
		if(s[i]==s[j])dp[i][j]=2+dp[i+1][j-1];
        else dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
			
		
	}
	
	
	fn(0,l-1);
	printf("\n");
	
}

}
