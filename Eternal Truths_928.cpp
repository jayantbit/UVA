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
#define INF 1<<29
typedef  long long int ull;
using namespace std;
typedef  pair<int,int> pr;

int m,n; 
string str[300];
int visited[300][300][4]={0};
struct node
{
       int x,y,d;
       node()
       {;}
       node(int a,int b,int c)
       {
                x=a;y=b;d=c;
       }
};

node des;
queue <node> q;
int valid(int x,int y)
{
    if(x<0 || x>=m)return 0;
    if(y<0 || y>=n)return 0;
    return 1;
}


int bfs()
{
     node temp;
     int x,y,d,next,st,i,xx,yy,flag,j;
     int dx[]= {-1, 0, 0, 1};
     int dy[]= {0, -1, 1, 0};

     while(!q.empty())
     {
                      temp=q.front();
                      q.pop();
                      x=temp.x;y=temp.y;d=temp.d;
                     // printf("%d %d %d.\n",x,y,visited[x][y][d]);
                      //getchar();
                      
                  
                     
                      next=d%3 +1;
                      
                      for(i=0;i<4;i++)
                      {
                                      xx=x+dx[i]*d;
                                      yy=y+dy[i]*d;
                                      flag=1;
                                      if(valid(xx,yy) && visited[xx][yy][next]==INF && str[xx][yy]!='#')
                                      {
                                                      for(j=1;j<=d;j++)
                                                      if(str[x+dx[i]*j][y+dy[i]*j]=='#'){flag=0;break;}
                                      
                                      }
                                      else flag=0;
                                      if(flag){
                                               q.push(node(xx,yy,next));
                                                visited[xx][yy][next]=visited[x][y][d]+1;
                                                if(xx==des.x && yy==des.y)return visited[xx][yy][next];
                                               }
                      }
    }
     return -1;
}


int main()
{
    int t,i,j,ans;
    read(t);
    while(t--)
    {
              read(m);read(n);getchar();
               for(i=0;i<m;i++)
              {
                              getline(cin,str[i]);
                            //  cout<<i;
                              for(j=0;j<n;j++){
                                               if(str[i][j]=='S'){ //printf("%d %d \n",i,j);
                                                                   q.push(node(i,j,1));
                                                                   visited[i][j][1]=0;
                                                                   continue;
                                                                  }
                                               else if(str[i][j]=='E')des=node(i,j,0);
                                               visited[i][j][1]=visited[i][j][2]=visited[i][j][3]=INF;
                                              }
              }
              
              ans=bfs();
              if(ans==-1)printf("NO\n");
              else printf("%d\n",ans);
              while(!q.empty())q.pop();
              
    }
              
              
              
 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
//system("pause");
return 0;
}
