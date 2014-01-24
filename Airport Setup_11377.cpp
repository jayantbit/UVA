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
#include <deque>
#include<sstream>
#include<cassert>
#define read(x) scanf("%d",&x)
#define write(x) printf("%d\n",x)
#define assign(x,n) x=(int*)calloc(n,4)
#define rep(i,n) for(i=1;i<=n;++i)
#define max(a,b) ((a)>(b))?(a):(b)
typedef  long long int ull;
typedef pair<int,int> pr;



vector <int> v[2001];
int visited[2001]={0};
int air[2001]={0};


int bfs(int s,int d)
{
	if(s==d)return 0;
	memset(visited,0,sizeof(visited));
	
	visited[s]=1;
	deque <pr> q;
	q.push_back(make_pair(s,!air[s]));
	int dis,i;
	
	
	while(!q.empty())
	{
		s=q.front().first;
		dis=q.front().second;
		if(s==d)return dis;
		q.pop_front();
		
		
		for(i=0;i<v[s].size();i++)
		if(!visited[v[s][i]])
		{
			visited[v[s][i]]=1;
			if(air[v[s][i]])q.push_front(make_pair(v[s][i],dis));
			else q.push_back(make_pair(v[s][i],dis+1));
		}
		
		
		
	}
	return -1;
}

int main()
{
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
int n,m,t,i,j,k,l,it,q,tt=1;
read(t);
while(t--)
{
	read(n);
	read(m);read(k);
	memset(air,0,sizeof(air));
	
	for(i=0;i<k;i++)
	{
		read(j);
		air[j]=1;
		
	}
	for(it=0;it<m;it++)
	{
		read(i);
		read(j);
		v[i].push_back(j);
		v[j].push_back(i);
	}
	
	read(q);
	printf("Case %d:\n",tt++);
	while(q--)
	{
		read(i);read(j);
		write(bfs(i,j));
		
	}
	cout<<endl;
	
	
	for(i=0;i<=n;i++)v[i].clear();
	
}


}

