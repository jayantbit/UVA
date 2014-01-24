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
#include<stack>
#include<sstream>
#define read(x) scanf("%d",&x)
#define write(x) printf("%d\n",x)
#define assign(x,n) x=(int*)calloc(n,4)
#define rep(i,n) for(i=1;i<=n;++i)
typedef  long long int ull;
using namespace std;
typedef  pair<int,int> pr;

int *visited;
vector <int>  v[1000001],nodes;
int flag=1;


void dfs(int s)
{     
    //cout<<s<<endl;
    visited[s]=1;
    int i;
    
    for(i=0;i<v[s].size();i++)
    if(!visited[v[s][i]])dfs(v[s][i]);
    if(flag)nodes.push_back(s);
    
}



int main()
{

int t,n,m,x,y,ans,i,j,temp,i2,tt=1;
read(t);
while(t--)
{
          read(n);read(m);
          assign(visited,n);
          while(m--)
          {
                    read(x);read(y);
                    x--;y--;
                    v[x].push_back(y);
          }
          
          for(i=0;i<n;i++)
          if(!visited[i])dfs(i);
          
          assign(visited,n);
          i=nodes.size()-1;
          flag^=1;
          for(ans=0;i>=0;i--)
          {
                                 if(!visited[nodes[i]])
                                { dfs(nodes[i]);
                                   ans++;
                                 }
          }
                                                            
          flag^=1;
          
           printf("Case %d: %d\n",tt++,ans);
          nodes.clear();
          for(i=0;i<n;i++)v[i].clear();
                         
          
}
          
          

 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);

return 0;
}
