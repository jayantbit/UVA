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
#define mx 1000


vector <int> v[mx];
int n,tim;
bool visited[mx]={0};
int low[mx]={0};
int dis[mx]={0};
int ap[mx]={0};
vector <pr> ans;
/*
8
0 (1) 1
1 (3) 2 0 3
2 (2) 1 3
3 (3) 1 2 4
4 (1) 3
7 (1) 6
6 (1) 7
5 (0)

*/


int dfs(int x,int pre)
{
	dis[x]=low[x]=++tim;
	visited[x]=1;
	
	int i,j,y;
	
	for(i=0;i<v[x].size();i++)
	{
		y=v[x][i];
		if(y==pre)continue;
		if(visited[y])low[x]=min(low[x],dis[y]);
		else
		{
			dfs(y,x);
			low[x]=min(low[x],low[y]);
			if(low[y]>dis[x])ans.push_back(make_pair(min(x,y),max(x,y)));
		}
		
		
	}
}




int main()
{
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
int m,i,j,k,u,f;
string s;
while(cin>>n)
{   

    memset(visited,0,sizeof(visited));
    memset(low,0,sizeof(low));
    memset(dis,0,sizeof(dis));
    memset(ap,0,sizeof(ap));
    ans.clear();
	tim=0;
	for(i=0;i<n;i++)
	{
		read(u);
		cin>>s;
		s=s.substr(1,s.length()-2);
		stringstream s2(s);
		s2>>j;
		while(j--)
		{
			read(f);
			v[u].push_back(f);
			v[f].push_back(u);
		}
		
	}
	
	
	for(i=0;i<n;i++)
	if(!visited[i])
	dfs(i,i);
	
	sort(ans.begin(),ans.end());
	j=ans.size();
	printf("%d critical links\n",j);
	for(i=0;i<j;i++)
	printf("%d - %d\n",ans[i].first,ans[i].second);
	printf("\n");
	
	for(i=0;i<n;i++)v[i].clear();
	
}
	
	
}




