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

vector <int> v[300];
int color[300]={0};

int bfs(int s)
{
    queue <int> q;
    color[s]=1;
    q.push(s);
    int total=0,c1=0,i,req,t,ans=1;
    while(!q.empty())
    {
                     t=q.front();
                     q.pop();
                     total++;
                     if(color[t]==1)c1++;
                     req=3-color[t];
                     for(i=0;i<v[t].size();i++)
                     {
                              if(color[v[t][i]]==-1  ){
                                                     color[v[t][i]]=req;
                                                     q.push(v[t][i]);
                                                     }
                              else if(color[v[t][i]]!=req)ans=0;
                     }
    }
    if(!ans)return 0;
   // if(total==1)return 1;
    return max(c1,total-c1);
}         


int main()
{
 
 int t,n,i,j,k,ans;
 read(t);
 while(t--)
 {
           read(n);
           for(i=0;i<n;i++)
           {
                           read(k);
                           while(k--)
                           {
                                     read(j);
                                     if(j>n)continue;
                                     j--;
                                     v[i].push_back(j);
                                     v[j].push_back(i);
                           }
                 color[i]=-1;
           } 
           ans=0;
           for(i=0;i<n;i++)
           if(color[i]==-1)
           ans+=bfs(i);
                             
           write(ans);
           for(i=0;i<n;i++)v[i].clear();     
 }    
                           
 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
//system("pause");
return 0;
}
