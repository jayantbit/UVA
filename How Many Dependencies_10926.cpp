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



vector <int> v[102];
int *visited,mx,pos;

int dfs(int s)
{
	
	int i,j=0,k;
	for(i=0;i<v[s].size();i++)
	if(!visited[v[s][i]])
	{
	 visited[v[s][i]]=1;
	 j+=dfs(v[s][i])+1;
    }
	
	return j;
}





int main()
{
	
	int n,i,j,k;
	while(read(n)!=EOF && n)
	{
		for(i=1;i<=n;i++)
		{
			read(j);
			while(j--)
			{
				read(k);
				v[i].push_back(k);
			}
		}
		
		
	
		mx=-1;pos=n;
		for(i=1;i<=n;i++)
		{
		  assign(visited,n+1);
		  j=dfs(i);
		  if(j>mx){mx=j;pos=i;}
		  //cout<<i<<" "<<j<<endl;
	     }
		
		for(i=1;i<=n;i++)
        v[i].clear();
	   
	   		write(pos);
		
	}
	
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
}

