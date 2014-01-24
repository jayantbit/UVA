using namespace std;
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
#include<cassert>
#define read(x) scanf("%d",&x)
#define write(x) printf("%d\n",x)
#define assign(x,n) x=(int*)calloc(n,4)
#define rep(i,n) for(i=1;i<=n;++i)
#define max(a,b) ((a)>(b))?(a):(b)
typedef  long long int ull;
typedef pair<int,int> pr;


bool visited[25][25][4][5]={0};
int m,n;

struct st
{
	int x,y,dir,color,moves;
	st()
	{
		x=y=dir=color=0;
		moves=0;
	}
	st(int a,int b,int c,int d,int e)
	{
		x=a;
		y=b;
		dir=c;
		color=d;
		moves=e;
	}
};


queue <st> q;

string grid[25];

int check(int x,int y,int dir,int color,int moves)
{
	
	if(x<0 || y<0)return 0;
	if(x>=m)return 0;
	if(y>=n)return 0;
	if(grid[x][y]=='#')return 0;
	if(visited[x][y][dir][color])return 0;
	visited[x][y][dir][color]=1;
	q.push(st(x,y,dir,color,moves));
	
}


int bfs()
{
	
	st temp;
	while(!q.empty())
	{
		temp=q.front();q.pop();
		
		if(grid[temp.x][temp.y]=='T' && temp.color==0)return temp.moves;
		
		if(temp.dir==0)check(temp.x-1,temp.y,temp.dir,(temp.color+1)%5,temp.moves+1);
		if(temp.dir==1)check(temp.x,temp.y+1,temp.dir,(temp.color+1)%5,temp.moves+1);
		if(temp.dir==2)check(temp.x+1,temp.y,temp.dir,(temp.color+1)%5,temp.moves+1);
		if(temp.dir==3)check(temp.x,temp.y-1,temp.dir,(temp.color+1)%5,temp.moves+1);
		
		
		check(temp.x,temp.y,(temp.dir+1)%4,temp.color,temp.moves+1);
		check(temp.x,temp.y,(temp.dir-1+4)%4,temp.color,temp.moves+1);
	}
	return -1;
}


int main()
{
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
int i,j,k,t=1;


while(cin>>m>>n && m+n)
{
	
    memset(visited,0,sizeof(visited));
	for(i=0;i<m;i++)
	{
	cin>>grid[i];
	
	for(j=0;j<n;j++)
	if(grid[i][j]=='S')
	{visited[i][j][0][0]=1;q.push(st(i,j,0,0,0));}
	  
    
   }
   
  
   k=bfs();
   while(!q.empty())q.pop();
   
   if(t>1)printf("\n");
   printf("Case #%d\n",t++);
   if(k!=-1)printf("minimum time = %d sec\n",k);
   else printf("destination not reachable\n");

}
}

