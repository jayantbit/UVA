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
using namespace std;
#define INF INT_MAX
//10080

typedef  pair<double,double> pr;

int flow[210][210]={{0}},path[210],n,s,d;

vector <pr> h,g;


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

double dist(pr a,pr b)
{
    double i=a.first-b.first;
    double j=a.second-b.second;
    return i*i + j*j;
}

int main()
{
  int m,sc,v,i,j,k,temp;
  double a,b,d1,d2;
  while(cin>>n>>m>>sc>>v)
  {
                         memset(flow,0,sizeof(flow));
                        for(i=1;i<=n;i++){
                                          flow[0][i]=1;
                                          //flow[i][0]=1;
                                          }
                                          
                       for(i=n+1;i<=n+m;i++){
                                          flow[i][n+m+1]=1;
                                          //flow[n+m+1][i]=1;
                                          }
                        for(i=0;i<n;i++)
                        {
                                        cin>>a>>b;
                                        g.push_back(make_pair(a,b));
                        }
                         
                        for(i=0;i<m;i++)
                        {
                                        cin>>a>>b;
                                        h.push_back(make_pair(a,b));
                        }
                       
                       d2=(double)sc*sc*v*v;
                       for(i=0;i<n;i++)
                       for(j=0;j<m;j++)
                       {d1=dist(g[i],h[j]);
                       if(d1<d2 || (d1-d2)<1e-7)
                       {
                                                   flow[i+1][n+1+j]=1;
                                            //       flow[n+1+j][i+1]=1;
                       }
                       }
                       
                       s=0;
                       temp=n;
                       d=n+m+1;
                       n=n+m+2;
                       k=maxflow();
                       cout<<temp-k<<endl;
                       h.clear();
                       g.clear();
  }
                                          
                                          
                         
                          
    
    
 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
//getchar();
return 0;
}
