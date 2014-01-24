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


int group[101]={0},n;

struct eg
{
  int u,v;
  int w;
  eg(){;}
  eg(int a,int b,int dd)
  {
    u=a;
    v=b;
    w=dd;
  }
};

bool comp(eg x,eg y)
{
  return x.w>y.w;
}

vector <eg> edge;


int find(int i) 
{
if(group[i]==i)return i;
return find(group[i]);  
}


int combine(int i,int j)
{
  if(i>j)swap(i,j);
  i=find(i);
  j=find(j);
  if(i==j)return 0;
  group[i]=j;
  return 1;
}


int kruskal() 
{
      sort(edge.begin(),edge.end(),comp);
      if(n==1)return edge[0].w;
	  int  cost=0;
      int i,j=0,k,m=0,x,y,ans=INT_MAX;
      
      for(i=0;i<edge.size();i++)
      if(combine(edge[i].u,edge[i].v))
      ans=min(ans,edge[i].w);
                                
      
      
   return ans;
}

int main()
{
	
	int t,i,j,m,u,v,c,tt=1;
	read(t);
	while(t--)
	{
		read(n);read(m);
		for(i=0;i<n;i++)group[i]=i;
		while(m--)
		{
			
			read(u);read(v);read(c);
			edge.push_back(eg(u,v,c));
			edge.push_back(eg(v,u,c));
			
		}
		printf("Case #%d: %d\n",tt++,kruskal());
		edge.clear();
		
		
	}
	
}

