#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
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
typedef  long long int ull;
using namespace std;

struct edge
{ int u,f,active;
  edge(int a,int b)
  {u=a;f=b;active=1;}
};


//topological sort


int main()
{
   //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);

int n,m,i,j,k;

while(cin>>n>>m)
{
                vector <int> indegree(n+1);
                vector <int> inactive(n+1);
                vector <int> ans,v2;
                vector <edge> eg;
                
                while(m--)
                {
                     cin>>i>>j;
                     
                     eg.push_back(edge(i,j));
                     indegree[j]++;
                }
                
                for(i=1;i<=n;i++)
                if(indegree[i]==0)v2.push_back(i);
                
                for(j=0;j<n;j++)
                {
                i=v2[j];
                inactive[i]=1;
                ans.push_back(i);
                
                for(k=0;k<eg.size();k++)
                if(eg[k].active && eg[k].u==i){
                                               eg[k].active=0;
                                               indegree[eg[k].f]--;
                                               if(indegree[eg[k].f]==0)v2.push_back(eg[k].f);
                                               }
                }     
                          

               for(j=0;j<n;j++)
               {
                               if(j)cout<<" ";
                               cout<<ans[j];
               }
               cout<<endl;
}
                              



system("pause");
return 0;
}
