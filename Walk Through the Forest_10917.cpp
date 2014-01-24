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
#define INF 10000000000000LL
typedef  long long int ull;
typedef pair<int,long long int> pr;


vector<pr> v[1001];
ull dis[1001]={0};
bool visited[1001]={0};
int n,m;
int ans[1001]={0};
int rec[1001]={0};

class comp
{
	public:
		bool operator()(pr &lhs,pr &rhs)
		{
			return lhs.second >rhs.second;
		}
};


void dijkastra(int s)
{
	int i,j,k;
	for(i=1;i<=n;i++)
	dis[i]=INF;
	
	dis[s]=0;
	ull ds;
	priority_queue <pr,vector<pr>,comp>  q;
	q.push(make_pair(s,0));
	
	
	while(!q.empty())
	{
		
		s=q.top().first;
		ds=q.top().second;
		q.pop();
		
		for(i=0;i<v[s].size();i++)
		if(dis[v[s][i].first]>ds + v[s][i].second)
		{
			dis[v[s][i].first]=ds + v[s][i].second;
			q.push(make_pair(v[s][i].first,dis[v[s][i].first]));
		}
		
	}
	
}


int dfs(int s)
{
	int i,j,k=0;
	visited[s]=1;
	//cout<<s<<endl;

	if(s==2)
	{
	
	return (ans[s]=1);
    }
	
	for(i=0;i<v[s].size();i++)
	{
		j=v[s][i].first;
		if(dis[j]>=dis[s])continue;
		
		if(!visited[j])dfs(j);
	    k+=ans[j];
	}
	
		
	return (ans[s]=k);
}


int main()
{
	
	int i,j,k,d;
	
	while(cin>>n && n)
	{
		cin>>m;
		
		while(m--)
		{
			read(i);
			read(j);
			read(k);
			
			v[i].push_back(make_pair(j,k));
			v[j].push_back(make_pair(i,k));
		}
		
		
		dijkastra(2);
		
	//	for(i=1;i<=n;i++)cout<<i<<" "<<dis[i]<<endl;
		
		memset(visited,0,sizeof(visited));
		memset(ans,0,sizeof(ans));
		cout<<dfs(1)<<endl;
		
		//for(i=1;i<=n;i++)cout<<i<<" "<<ans[i]<<endl;
		
		for(i=1;i<=n;i++)v[i].clear();
	}
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
}

