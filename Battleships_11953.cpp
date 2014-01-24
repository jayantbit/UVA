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

/*
x...
x@x.
@x@.
.@..
*/

string grid[100];


int main()
{
	string s;
	int i,j,k,n,l,t,tt=1;
	read(t);
	while(t--)
	{
	cin>>n;
	for(i=0;i<n;i++)
	cin>>grid[i];
		
	k=0;
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	if(grid[i][j]=='x')
	{
	  k++;
	  if(j+1<n && (grid[i][j+1]=='x' || grid[i][j+1]=='@'))
	  {
	  	l=j+1;
	  	while(l<n &&  (grid[i][l]=='x' || grid[i][l]=='@')){grid[i][l]='.';l++;}
	  	
  		l=j-1;
	  	while(l>=0 &&  (grid[i][l]=='x' || grid[i][l]=='@')){grid[i][l]='.';l--;}
	  }
	  else if(i+1<n && (grid[i+1][j]=='x' || grid[i+1][j]=='@'))
	  {
	  	l=i+1;
	  	while(l<n &&  (grid[l][j]=='x' || grid[l][j]=='@')){grid[l][j]='.';l++;}
	  	
  		l=i-1;
	  	while(l>=0 &&  (grid[l][j]=='x' || grid[j][j]=='@')){grid[l][j]='.';l--;}
	  }
  	}	
	printf("Case %d: %d\n",tt++,k);
    }
	
	
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
}

