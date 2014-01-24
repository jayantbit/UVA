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
#define read(x) scanf("%d",&x)
#define write(x) printf("%d\n",x)
#define assign(x,n) x=(int*)calloc(n,4)
#define rep(i,n) for(i=1;i<=n;++i)
#define max(a,b) ((a)>(b))?(a):(b)
typedef  long long int ull;

int wolf[101][101]={{0}};
ull ways[101][101]={{0}};


int main()
{
int t,w,h,n,i,j,k;
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
while(cin>>w>>h && w+h)
{
	
	memset(wolf,0,sizeof(wolf));
	memset(ways,0,sizeof(ways));
	read(n);
	while(n--)
	{
		read(i);read(j);
		wolf[j][i]=1;
	}
	
	for(j=w-1;j>=0;j--)
	if(!wolf[h][j])ways[h][j]=1;
	else break;
	
	for(i=h-1;i>=0;i--)
	if(!wolf[i][w])ways[i][w]=1;
	else break;
	
	for(i=h-1;i>=0;i--)
	for(j=w-1;j>=0;j--)
	if(!wolf[i][j])ways[i][j]=ways[i][j+1]+ways[i+1][j];
	
	if(ways[0][0]==0)printf("There is no path.\n");
	else if(ways[0][0]==1)printf("There is one path from Little Red Riding Hood's house to her grandmother's house.\n");
	else printf("There are %lld paths from Little Red Riding Hood's house to her grandmother's house.\n",ways[0][0]);
}
//
}

