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
vector <int>  v[101],nodes;


void dfs(int s)
{     
    //cout<<s<<endl;
    visited[s]=1;
    
    
   
    int i;
    
    for(i=0;i<v[s].size();i++)
    if(!visited[v[s][i]])dfs(v[s][i]);
     nodes.push_back(s);
   
     
   }



int main()
{

int t,n,m,x,y,ans,i,j,temp,i2,tt=1;
while(1)
{
          read(n);read(m);
          if(n==0 && m==0)return 0;
          assign(visited,n);
          while(m--)
          {
                    read(x);read(y);
                    x--;y--;
                    v[y].push_back(x);
          }
          
          for(i=0;i<n;i++)
          if(!visited[i])dfs(i);
          
          for(i=0;i<n;i++)
          {
            if(i)printf(" ");
            printf("%d",nodes[i]+1);
          }
          nodes.clear();
          printf("\n");
          for(i=0;i<n;i++)v[i].clear();
                         
          
}
          
          

 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);

return 0;
}
