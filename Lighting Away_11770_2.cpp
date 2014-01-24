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

struct edge
{
       int u,f,active;
       edge(){;}
       edge(int a,int b){
                u=a;
                f=b;
                active=1;
                }
};


vector <edge> eg;
vector < int> v[10001];


int main()
{
   int n,m,i,j,k,temp,f,t=0,tt=1;
                read(t);
                while(t--)
                {
                read(n);read(m);
                vector<int> indegree(n+3,0),ans;
                vector<int> inactive(n+3,0);
                vector<int> visited(n+3,0);
                queue <int> q;
                vector <int> v2;
                
                while(m--)
                {
                     read(i);read(j);
                     eg.push_back(edge(i,j));
                     v[i].push_back(j);
                    
                     indegree[j]++;
                }
                /*
                for(j=0;j<n;j++)
                {
                for(i=1;i<=n;i++)
                if(!inactive[i] && indegree[i]==0){inactive[i]=1;break;}
                ans.push_back(i);
                
                for(k=0;k<eg.size();k++)
                if(eg[k].active && eg[k].u==i){eg[k].active=0;indegree[eg[k].f]--;}
                }  
                */
                f=0;
                for(j=0;j<n;j++)
               {
                               ans[j]=j+1;
                               if(visited[ans[j]])continue;
                               f++;
                              // cout<<ans[j]<<endl;
                               visited[ans[j]]=1;
                               q.push(ans[j]);
                               while(!q.empty())
                       {
                     temp=q.front();
                     q.pop();
                     for(i=0;i<v[temp].size();i++)
                     if(!visited[v[temp][i]]){q.push(v[temp][i]); visited[v[temp][i]]=1;}
                      }
                               
                               
               }
               printf("Case %d: %d\n",tt++,f);
               eg.clear();
               for(i=1;i<=n;i++)v[i].clear();
               }
                 
                 
                
 
 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
//system("pause");
return 0;
}
