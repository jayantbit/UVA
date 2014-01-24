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
#include<cstdarg>
#include<queue>
#include<sstream>
#define write(x) printf("%d\n",x)
#define assign(x,n) x=(int*)calloc(n,4)
#define rep(i,n) for(i=1;i<=n;++i)
#define max(a,b) ((a)>(b))?(a):(b)
typedef  long long int ull;
using namespace std;
typedef  pair<int,int> pr;

int visited[10][10][10][10];

#define read(x) scanf("%d",&x)

int x,y,z,w;

struct pos
{
       int a,b,c,d,t;
       pos(int x,int y,int z,int w,int tt)
       {
               a=x;b=y;c=z;d=w;t=tt;
       }
};

queue <pos> q;


void check(int a,int b,int c,int d,int e)
{
     a=(a+10)%10;b=(b+10)%10;c=(c+10)%10;d=(d+10)%10;
     if(a<0 || b<0 || c<0 || d<0)return;
     if(a>9 || b>9 || c>9 || d>9)return;
     if(visited[a][b][c][d])return;
     visited[a][b][c][d]=1;
     q.push(pos(a,b,c,d,e+1));
}

int bfs()
{
    pos temp(0,0,0,0,0);
    int v;
    while(!q.empty())
    {
                     temp=q.front();
                     q.pop();
                     if(temp.a==x && temp.b==y && temp.c==z && temp.d==w)return temp.t;
                     
                     check(temp.a+1,temp.b,temp.c,temp.d,temp.t);
                     check(temp.a,temp.b+1,temp.c,temp.d,temp.t);
                     check(temp.a,temp.b,temp.c+1,temp.d,temp.t);
                     check(temp.a,temp.b,temp.c,temp.d+1,temp.t);
                     
                     check(temp.a-1,temp.b,temp.c,temp.d,temp.t);
                     check(temp.a,temp.b-1,temp.c,temp.d,temp.t);
                     check(temp.a,temp.b,temp.c-1,temp.d,temp.t);
                     check(temp.a,temp.b,temp.c,temp.d-1,temp.t);
                     
                     visited[temp.a][temp.b][temp.c][temp.d]=1;
    }
    return -1;
}


int main()
{
  int t,a,b,c,d,n;
 read(t);
 while(t--)
 {
           read(a);read(b);read(c);read(d);
           memset(visited,0,sizeof(visited));
           q.push(pos(a,b,c,d,0));
           visited[a][b][c][d]=1;
           read(x);read(y);read(z);read(w);
           read(n);
           while(n--)
           {
                       read(a);read(b);read(c);read(d);
                      visited[a][b][c][d]=1;
           }
           write(bfs());
           while(!q.empty())q.pop();
 }
           
           
                     
           
           
 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
//getchar();
return 0;
}
