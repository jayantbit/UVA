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



map <string,int> mp;

int dis[100][100]={{0}};



struct st
{
	int d,k,stop;
	st()
	{
		d=k=stop=0;
	}
	st(int dd,int kk,int st)
	{
		d=dd;k=kk;stop=st;
	}
};

vector <pr> v[100];
class comp
{
	public:
		bool operator()(st &lhs,st &rhs)
		{
			return lhs.k > rhs.k;
		}
};

int dijkastra(int s,int d)
{
	
	int i,j,k;
	for(i=0;i<=d;i++)
	for(j=0;j<=d;j++)
	dis[i][j]=INT_MAX; 
	dis[0][0]=0;

	st obj;
	pr temp;
	
	
	
	priority_queue <st,vector<st>,comp> q;
	q.push(st(s,0,-1));
	
	while(!q.empty())
	{
	  
	  obj=q.top();q.pop();
	  
	  s=obj.d;
	  int cost=obj.k;
	  int stop=obj.stop;
	  
	  
	for(i=0;i<v[s].size();i++)
	{
		temp=v[s][i];
		if(dis[temp.first][stop+1] > cost + temp.second)
		{
			dis[temp.first][stop+1]=cost + temp.second;
			q.push(st(temp.first,dis[temp.first][stop+1],stop+1));
		}
		
	}
    }
    
    
}

int main()
{
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);

int t,n,m,q,i,j,k,tt=1;

read(t);
string s,s2;
while(t--)
{
	read(n);
	for(i=0;i<n;i++)
	{
		cin>>s;
		mp[s]=i;
		
	}
	read(m);
	while(m--)
	{
		
		cin>>s>>s2>>k;
		i=mp[s];
		j=mp[s2];
		
		v[i].push_back(make_pair(j,k));
	
	}
	read(q);
	if(tt>1)printf("\n");
	dijkastra(0,n-1);
	
	for(i=1;i<n;i++)
	dis[n-1][i]=min(dis[n-1][i-1],dis[n-1][i]);
	
	printf("Scenario #%d\n",tt++);
	while(q--)
	{
		read(i);
		
		i=min(i,n-1);
	    j=dis[n-1][i];
  
	    if(j!=INT_MAX)printf("Total cost of flight(s) is $%d\n",j);
	    else printf("No satisfactory flights\n");
	}
	
	for(i=0;i<n;i++)
	v[i].clear();
	
	
}


}

