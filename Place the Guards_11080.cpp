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
typedef  pair<int,int> pr;


vector <int> v[200];
int color[200]={0};

int bfs(int s)
{
    queue <int> q;
    color[s]=1;
    q.push(s);
    int total=0,c1=0,i,req,t;
    while(!q.empty())
    {
                     t=q.front();
                     q.pop();
                     total++;
                     if(color[t]==1)c1++;
                     req=!color[t];
                     for(i=0;i<v[t].size();i++)
                     {
                              if(color[v[t][i]]==-1){
                                                     color[v[t][i]]=req;
                                                     q.push(v[t][i]);
                                                     }
                              else if(color[v[t][i]]!=req)return -1;
                     }
    }
    if(total==1)return 1;
    return min(c1,total-c1);
}                       
                                                                      
int main()
{
 int n,t,m,a,b,ans,i,k;
 read(t);
 while(t--)
 {
           read(n);read(m);
           while(m--)
           {
                     read(a);read(b);
                     v[a].push_back(b);
                     v[b].push_back(a);
           }
           memset(color,-1,sizeof(color));
           ans=0;
           for(i=0;i<n;i++)
           if(color[i]==-1)
           {
                              k=bfs(i);
                              if(k==-1){ans=-1;break;}
                              else ans+=k;
           }
                              
           write(ans);
           for(i=0;i<n;i++)v[i].clear();
           
 }          
           
 
 
 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
//getchar();
return 0;
}
