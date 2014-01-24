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
#define INF INT_MAX


int flow[100][100],path[100],n,s,d,route[100],ans;

void dfs(int src,int pos=0,int minpath=INT_MAX)
{
    route[pos]=src;
    path[src]=-1;
    int i;
    if(src==d){for( i=pos;i>=1;i--)
               { //cout<<route[i]+1<<" ";
                
                flow[route[i-1]][route[i]]-=minpath;
			    flow[route[i]][route[i-1]]+=minpath;
			   
               }
              // cout<<minpath<<endl;
                ans+=minpath;
                return;
               }
               
               
    for(i=0;i<n;i++)if(flow[src][i]!=0 && path[i]==-2)dfs(i,pos+1,min(minpath,flow[src][i]));
    path[src]=-2;
}
    
    


int bfs()
{    
    queue <int> q;
    int i,ans,item;
    for(i=0;i<n;i++)path[i]=-2;
   
    q.push(s);
    path[s]=-1;
    while(!q.empty())
    {
                     item=q.front();
                     
                    
                     q.pop();
                     if(item==d)
                     {            
                                  i=d;
                                  ans=INF;
                                  while(path[i]!=-1){ans=min(ans,flow[path[i]][i]);i=path[i];}
                                  return ans;
                     }
                     else for(i=0;i<n;i++)
                          if(flow[item][i]!=0 && path[i]==-2){q.push(i);path[i]=item;}
    } 
    return 0;
}             
                     
                     
int maxflow() 
{
	int i,cf,totalflow=0;
	while((cf=bfs())!=0) 
    {  
   
		totalflow+=cf;
		i=d;
		while(path[i]!=-1) {
			flow[path[i]][i]-=cf;
			flow[i][path[i]]+=cf;
			i=path[i];
		}
	}
	return totalflow;
}


int main()
{
    int t,c,f,a,b,k,tt=1;
    while(read(n) && n)
    {
                  read(s);read(d);read(c);
                  memset(flow,0,sizeof(flow));
                  s--;d--;
                  while(c--)
                  {
                            read(a);read(b);read(k);
                            a--;
                            b--;
                            flow[a][b]+=k;
                            flow[b][a]+=k;
                          
                            
                  }
   
   // for(int i=0;i<n;i++)path[i]=-2;
      ans=0;
     // dfs(s);
    //  cout<<ans<<endl;
    
    printf("Network %d\nThe bandwidth is %d.\n\n",tt++,maxflow());
        
    }         
                            
                  
    
 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
//getchar();
return 0;
}
