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
typedef  long long int ull;
using namespace std;
typedef  pair<int,int> pr;

int *visited;
vector <int>  v[105];
int lmax,node;
int *dis;

int dfs(int s)
{     
    
     visited[s]=1;
     if(dis[s])return dis[s];
    int i,j=0;
    
    for(i=0;i<v[s].size();i++)
    if(!visited[v[s][i]])
    j=max(j,dfs(v[s][i]));
    
    dis[s]=j+1;
    return dis[s];
}          
           
    
    



int main()
{

int n,s,x,y,t=1,i;
while(cin>>n && n)
{
             
             cin>>s;
             while(cin>>x>>y && x+y)v[x].push_back(y);
             assign(visited,n+1);
             assign(dis,n+1);
             lmax=dfs(s);
             node=s;
             
             printf("Case %d: The longest path from %d has length %d, finishing at %d.\n\n",t++,s,lmax,node);
             for(i=0;i<=n;i++)v[i].clear();
}
             

 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);

return 0;
}
