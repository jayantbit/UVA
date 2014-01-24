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
#define INF INT_MAX
typedef  long long int ull;
using namespace std;
typedef  pair<int,int> pr;


int n,m;
int mat[1000][1000]={{0}};
int cost[1000][1000]={{0}};
int vis[1000][1000]={{0}};

       
        struct vertex
{
       int x,y,w;
       vertex(int a,int b,int c){x=a;y=b;w=c;}
}temp(0,0,0);       
       



  bool mycomp( vertex& lhs,  vertex& rhs) 
  {return (lhs.w>rhs.w);}



priority_queue< vertex, vector<vertex>, mycomp > q;


int check(int i,int j,int wt)
{
     if(i<0 || i>=n)return 0;
     if(j<0 || j>=m)return 0;
     if(vis[i][j])return 0;
     if(wt+mat[i][j]<cost[i][j])
     {
                                cost[i][j]=wt+mat[i][j];
                                q.push(vertex(i,j,cost[i][j]));
     }
     vis[i][j]=1;
}
     
     



int dijkastra()
{   
    int i,j,xx,yy,ww;
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    {cost[i][j]=INF;vis[i][j]=0;}
    cost[0][0]=0;
    
    while(!q.empty())q.pop();
    
    q.push(vertex(0,0,mat[0][0]));
    vis[0][0]=1;
    cost[0][0]=mat[0][0];
    
    while(!q.empty())
    {
    temp=q.top();
    q.pop();
    xx=temp.x;
    yy=temp.y;
    ww=temp.w;   
    if(xx==n-1 && yy==m-1)return ww;
    check(xx+1,yy,ww);check(xx-1,yy,ww);
    check(xx,yy-1,ww);check(xx,yy+1,ww);
    }

return -1;

}






int main()
{
int i,j,t;
cin>>t;
while(t--)
{
                read(n);
                read(m);
                for(i=0;i<n;i++)
                for(j=0;j<m;j++)
                read(mat[i][j]);
                write(dijkastra());
}                
                
return 0;
}
