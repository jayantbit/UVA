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


int mat[100][100],r,c,m,n,odd;
int kount[100][100],visited[100][100];

struct node
{
       int x,y;
       node(){};
       node(int xx,int yy){x=xx;y=yy;}
};

queue <node> q;
void check(int xx,int yy,int *k)
{
      if(xx>=0 && yy>=0 && xx<r && yy<c && kount[xx][yy]!=-1)
                                      {*k=*k+1;
                                      if(!visited[xx][yy]  )q.push(node(xx,yy));
                                      }
}

int bfs()
{
     node temp;
     int dx[]={1,1,-1,-1};
     int dy[]={1,-1,1,-1},i,x,y,xx,yy,k,even=0,p;
     int dx2[]={1,-1,0,0};
     int dy2[]={0,0,1,-1};
     while(!q.empty())
     {
                      temp=q.front();
                      q.pop();
                      x=temp.x;
                      y=temp.y;
                      visited[x][y]=1;
                      if(kount[x][y]>0)continue;
                      k=0;
                      if(m&n)
                      {
                      for(i=0;i<4;i++)
                      check(x+dx[i]*m,y+dy[i]*n,&k);
                      if(m!=n)
                      for(i=0;i<4;i++)
                      check(x+dx[i]*n,y+dy[i]*m,&k);
                      }
                      else if(m|n){p=m|n;
                                   for(i=0;i<4;i++)
                                   check(x+dx2[i]*p,y+dy2[i]*p,&k);
                                   }
                      kount[x][y]=k;
                      if(k==0)continue;
                      if(k%2)odd++;
                      else even++;
     }
     return even;
}
                      
                      
                      
                      
     



int main()
{
    
    int t,i,j,a,b,w,tt=1;
    read(t);
    while(t--)
    {
              read(r);
              read(c);
              read(m);
              read(n);
              odd=0;
              memset(visited,0,sizeof(visited));
              memset(kount,0,sizeof(kount));
              read(w);
              j=w;
              while(w--)
              {
                        read(a);read(b);
                        kount[a][b]=-1;
              }
              q.push(node(0,0));
              
               i=bfs();
               printf("Case %d: %d %d\n",tt++,i,odd);
               /*
               for(i=0;i<r;i++)
               {
                               cout<<endl;
                               for(j=0;j<c;j++)cout<<kount[i][j]<<" ";
               }
               */
              
               
    }              
              
 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);

return 0;
}
