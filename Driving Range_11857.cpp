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
	int u,f,c;
	eg(){;}
	eg(int x,int y,int z)
	{
		u=x;
		f=y;
		c=z;
	}
};

vector <eg> edge;
vector <int> v(1000001);
int n;

bool comp(eg x,eg y)
{
	return x.c<y.c;
}


int find(int i)
{
    if(v[i]==i)return i;
    return find(v[i]);
}




void kruskal() 
{
      sort(edge.begin(),edge.end(),comp);
     
      ull  cost=0;
      ull i,j=0,k,m=0,x,y;
      
      for(i=0;i<=n;i++)v[i]=i;
      
      for(i=0;i<edge.size();i++)
      {
                                eg temp;
                                temp=edge[i];
                                
                                if((x=find(temp.u))!=(y=find(temp.f)))
                                {
                                
                                if(x>y)swap(x,y);
                                v[x]=y;
                                m++;
                                cost=max(cost,temp.c);
                               
                                }
                                if(m==n-1)break;
      }
   
    if(m== n-1)printf("%lld",cost);
    else printf("IMPOSSIBLE");
    printf("\n");
}


int main()
{
	int m,i,j,k,a,b,c;
	while(scanf("%d%d",&n,&m)!=EOF && n+m)
	{
		
		for(i=0;i<m;i++)
		{
			scanf("%d%d%d",&a,&b,&c);
	        edge.push_back(eg(a,b,c));
			
		}
		kruskal();
		edge.clear();
	}
return 0;	
	
}

