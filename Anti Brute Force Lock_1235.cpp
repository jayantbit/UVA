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



vector <string> v;


int group[502]={0};

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

int dist(string a,string b)
{
	
	int i,j=0;
	for(i=0;i<4;i++)
	{
	if(a[i]==b[i])continue;
	if(a[i]<b[i])swap(a[i],b[i]);
	j+=min(10-(a[i]-b[i]),a[i]-b[i]);
    }
return j;	
}

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


int kruskal() 
{
      sort(edge.begin(),edge.end(),comp);
      int  cost=0;
      int i,j=0,k,m=0,x,y;
      
      for(i=0;i<edge.size();i++)
      {
                                if(combine(edge[i].u,edge[i].v))
                                { cost+=edge[i].w;
                                  //cout<<v[edge[i].u]<<" "<<v[edge[i].v]<<" "<<edge[i].w<<endl;
                                }
                                
      }
      
   return cost;
}



int main()
{
	
int n,t,i,j,k;
string s;	
read(t);
while(t--)
{
	read(n);
	for(i=0;i<n;i++)
	{
		cin>>s;
		v.push_back(s);
	}
	k=INT_MAX;
	
	for(i=0;i<n;i++)
	{
		group[i]=i;
		for(j=i+1;j<n;j++)
		edge.push_back(eg(i,j,dist(v[i],v[j])));
	   k=min(k,dist(v[i],"0000"));
	}
	cout<<kruskal()+k<<endl;
	v.clear();
	edge.clear();
}
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
}

