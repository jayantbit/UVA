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
#define mx 3100

int visited[mx],low[mx],dis[mx],ap[mx],tim;
vector <int> v[mx];


int dfs(int x,int pre)
{
	low[x]=dis[x]=tim++;
	visited[x]=1;
	
	int i,y,flag=0,child=0;
	for(i=0;i<v[x].size();i++)
	{
		y=v[x][i];
		if(y==pre)continue;
		if(visited[y])low[x]=min(low[x],low[y]);
		else
		{
			child++;
			dfs(y,x);
			low[x]=min(low[x],low[y]);
			if(low[y]>=dis[x])flag=1;
			
		}
	}
	
	if(pre==x)ap[x]=(child>=2);
	else ap[x]=flag;
	            
}



int main()
{
int t,n,m,k,x,y,i;

while(cin>>n)
{
	
	getchar();
	if(!n)return 0;
	
	memset(visited,0,sizeof(visited));
	memset(dis,0,sizeof(visited));
	memset(low,0,sizeof(visited));
	memset(ap,0,sizeof(visited));
	string str;
	
	
	while(getline(cin,str))
	{
		
		stringstream s2(str);
		
		s2>>x;
		if(!x)break;
		while(s2>>y)
		{
		v[x-1].push_back(y-1);
		v[y-1].push_back(x-1);
	    }
	}
	tim=0;
	dfs(0,0);
	
	int c=0;
	for(i=0;i<n;i++)
	{
	if(ap[i]){c++;}
	
    v[i].clear();
	}
	write(c);
}
	return 0;
}
	
	

