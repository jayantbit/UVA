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
#define INF INT_MAX
typedef  long long int ull;
typedef pair<int,int> pr;

/*
1 2 3 4 5 6  
10 0 10 20 30 20
10 0 10 10 0 10
10 0 10 0 10 20

*/
   
struct vertex
{
       int i,w;
       vertex(int a,int b){i=a;w=b;}
};       
       


class mycomparison
{
public:
  bool operator() ( vertex& lhs,  vertex& rhs) 
  {return (lhs.w>rhs.w);}
};

vector <pr> v[502];
int dis[501]={0},vis[501]={0};
priority_queue< vertex, vector<vertex>, mycomparison > q;
int station[501]={0},n;
vector <int> pre;



int dijkastra()
{   
    int i,j,k,s,pos=-1;
   
   	for(i=1;i<=n;i++)vis[i]=0;
   
    while(!q.empty())
    {
    
    s=q.top().i;
    q.pop();
    
    
    for(i=0;i<v[s].size();i++)
    {
    if(vis[v[s][i].first])continue;
    if(dis[s]+v[s][i].second<dis[v[s][i].first])
    {
                                                dis[v[s][i].first]=dis[s]+v[s][i].second;
                                                q.push(vertex(v[s][i].first,dis[v[s][i].first]));
    }
    }
    vis[s]=1;
    }
    
    j=0;
	for(i=1;i<=n;i++)
	{  
	   if(dis[i]>j){j=dis[i];pos=i;}
	   

    }
	
	
	return j;
}


int main()
{
	
	int t,u,f,w,i,ans,pos,k,j,first=1;
	read(t);
	string str;
	
	while(t--)
	{
		read(f);read(n);
	
		pos=-1;
	   
		
		while(f--)
		{
			read(u);
			station[u]=1;
			pre.push_back(u);
		}
		getchar();
		while(getline(cin,str) && str.length())
		{
			stringstream s2(str);
			s2>>u>>f>>w;
			v[u].push_back(make_pair(f,w));
			v[f].push_back(make_pair(u,w));
		}
		
		
		ans=INT_MAX;
		
		for(i=1;i<=n;i++)
		{
			 if(station[i]){station[i]=0;continue;}
			 
			 for(j=1;j<=n;j++)dis[j]=INF;
			 
			 for(j=0;j<pre.size();j++)
			 {
			 	dis[pre[j]]=0;
			 	q.push(vertex(pre[j],0));
			 }
			 dis[i]=0;q.push(vertex(i,0));
			 k=dijkastra();
			 if(k<ans)
			 {
			 	ans=k;
			 	pos=i;
			 }
			 
	    }
		
		
		
		for(i=1;i<n;i++)v[i].clear();
		pre.clear();
		if(pos==-1)pos=n;
		if(!first)printf("\n");
		first=0;
		write(pos);
	}
}


