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

struct st
{
	int x,y;
	st(int a,int b)
	{
	x=a;y=b;
	}
	st(){;}
	
}start;

int b;
int cost[11][11];
vector <st> v;


int dist(int s,int state=1,int len=0)
{

//cout<<s<<" "<<state<<" "<<len<<endl;getchar();
int i,ans=INT_MAX,flag=1;
for(i=0;i<=b;i++)
{
	if((!!(state&(1<<i)))==0){
							  ans=min(ans,dist(i,state|(1<<i),len+cost[s][i]));
						      flag=0;
							 }
						 
}
if(flag)return len+cost[s][0];
return ans;	
}


int main()
{
	int i,j,k,n,m,tt;
	cin>>tt;
	while(tt--)
	{
	
	
	cin>>n>>m;
	cin>>start.x>>start.y;
	cin>>b;
	v.push_back(start);
	for(i=0;i<b;i++)
	{
		cin>>j>>k;
		v.push_back(st(j,k));
	}
	
	for(i=0;i<=b;i++)
	for(j=i+1;j<=b;j++)
	cost[i][j]=cost[j][i]=abs(v[j].x-v[i].x)+abs(v[j].y-v[i].y);
	
	printf("The shortest path has length %d\n",dist(0));
	v.clear();
    }
	
	
	
return 0;
	
	
}

