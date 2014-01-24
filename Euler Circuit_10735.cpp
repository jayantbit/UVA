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


int type[101][101]={{0}};
int v[101][101]={{0}};
int place[505]={0},n,m;
vector <int> adj[101];



int eularian(int pos)
{
	if(pos>m+1)return 0;
	//cout<<pos<<endl;
	int i,j,k,found=0;
	
			if(pos==0)
	{
		
		for(i=1;i<=n;i++)
		{
		place[0]=i;
		if(eularian(1))return 1;
	    }
	    return 0;
	}
    int pre=place[pos-1];
	
   for(j=0;j<adj[pre].size();j++)
	{
		i=adj[pre][j];
	if(v[pre][i])
	{
	    found=1;
		if(type[pre][i] && v[pre][i]<=type[pre][i])v[i][pre]--;
		v[pre][i]--;
		place[pos]=i;
		if(eularian(pos+1))return 1;
		v[pre][i]++;
		if(type[pre][i] && v[pre][i]<=type[pre][i])v[i][pre]++;
		
	}
    }
	
	
	if(!found)
	{
		
		if(place[pos-1]==place[0]  && pos==m+1)
		{
		   //for(i=1;i<=n;i++)for(j=0;j<adj[i].size();j++)if(v[i][j])return 0;
		   
		
		   for(i=0;i<pos;i++)
		   {
		   	   if(i)printf(" ");
			   printf("%d",place[i]);
		   }
		   printf("\n");
		   
		   return 1;
		
		}
		return 0;
		
	}
	return 0;
	
}

int main()
{
	//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
	int t,i,j,k;
	char ch;
	read(t);
	while(t--)
	{
		read(n);read(m);
		memset(type,0,sizeof(type));
		memset(v,0,sizeof(v));
		//memset(place,0,sizeof(place));
	
		
		for(k=0;k<m;k++)
		{
			read(i);read(j);
			cin>>ch;
			
			if(ch=='D'){
			            v[i][j]++;
			            adj[i].push_back(j);
			          }
			else
			{
				adj[i].push_back(j);
				adj[j].push_back(i);
				v[i][j]++;v[j][i]++;
				type[i][j]++;
				type[j][i]++;
				
			}
			
		}
		
		
		
		if(!eularian(0))
		printf("No euler circuit exist\n");
		if(t)printf("\n");
		
		for(i=1;i<=n;i++)adj[i].clear();
	}

}

