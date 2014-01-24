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
#define INF INT_MAX
typedef  long long int ull;
using namespace std;
typedef  pair<int,int> pr;


int flow[205][205],path[205],n,s,d;

 
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
		  if(flow[path[i]][i]!=INF)
          {	flow[path[i]][i]-=cf;
			flow[i][path[i]]+=cf;
          }
			i=path[i];
		}
	}
	return totalflow;
}


int main()
{
 int i,j,k,l,m;
 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
 while(scanf("%d",&n)!=EOF)
 {
           
            memset(flow,0,sizeof(flow));
          
            for(i=1;i<=n;i++){
                              read(j);
                              flow[i][n+i]=j;
                            
                              }
          
            read(m);
             while(m--)
             {
                       read(i);read(j);read(k);
                       flow[i+n][j]+=k;
             } 
             read(k);read(l);
             while(k--)
             {
                       read(i);
                       flow[0][i]=INF;
             }
             while(l--)
             {
                       read(i);
                       flow[n+i][2*n+1]=INF;
             }
              s=0;
              d=2*n+1;
              n=2*n+2;
              write(maxflow());
              
 }
                       
                 
 
 
 //
//getchar();
return 0;
}
