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

//2nd best MST

int group[101]={0};

struct eg
{
	int u,v;
	int w,flag,live;
	eg(){;}
	eg(int a,int b,int dd)
	{
		u=a;
		v=b;
		w=dd;
		flag=0;
		live=1;
	}
};

bool comp(eg x,eg y)
{
  return x.w<y.w;
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

int n,m;

int kruskal(int f) 
{
      if(f)sort(edge.begin(),edge.end(),comp);

	  
	  int  cost=0;
      int i,j=0,k,x,y,z=0;
      
      for(i=0;i<n;i++)group[i]=i;
      
      for(i=0;i<m;i++)
      {
                                if(edge[i].live==0)continue;
								
								if(combine(edge[i].u,edge[i].v))
                                {cost+=edge[i].w;
                                 if(f)edge[i].flag=1;
                                 z++;
								}
                                
      }
      if(z!=n-1)return INT_MAX;
   return cost;
}


int main()
{

int t,x,y,c,ans1,ans2,i,j;
read(t);
while(t--)
{
	read(n);read(m);
	for(i=0;i<m;i++)
	{
		read(x);
		read(y);
		read(c);
		edge.push_back(eg(x-1,y-1,c));
		
		
	}
	
	ans1=kruskal(1);
	ans2=INT_MAX;
	
	for(i=0;i<m;i++)
	if(edge[i].flag)
	{
		edge[i].live=0;
		//cout<<edge[i].u<<" "<<edge[i].v<<" "<<edge[i].w<<endl;
		ans2=min(ans2,kruskal(0));
		edge[i].live=1;
	}
	
	
	cout<<ans1<<" "<<ans2<<endl;
	edge.clear();
}



}

