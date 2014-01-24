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

struct eg
{
	int u,v,w,flag;
	eg()
	{;}
	eg(int x,int y,int z )
	{
		u=x;
		v=y;
		w=z;
		flag=0;
	}
};


int group[1000]={0};
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


bool comp(eg i,eg j)
{
	return i.w<j.w;
}
int main()
{

int n,m,w,i,j,k,u,v;


while(cin>>n>>m && n+m)
{
	
	
	for(i=0;i<=n;i++)group[i]=i;

	for(i=0;i<m;i++)
	{
		cin>>j>>k>>w;
		edge.push_back(eg(j,k,w));
	}
	sort(edge.begin(),edge.end(),comp);
	
	for(i=0;i<m;i++)
	{
		u=edge[i].u;
		v=edge[i].v;
		
		if(combine(u,v))edge[i].flag=1;
	}
	
	int found=0;
	for(i=0;i<m;i++)
	if(edge[i].flag==0){
						if(found)cout<<" ";
						cout<<edge[i].w;
						found=1;
		                }
	if(!found)cout<<"forest";
	cout<<endl;
	edge.clear();
	
}

//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
}

