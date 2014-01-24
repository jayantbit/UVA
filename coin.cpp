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


int main()
{
	int coin[6]={1,2,2,5,10,15},n=6,ways[1000]={1,0},i,j;
	
    
	for(j=35;j>=0;j--)
	for(i=0;i<n;i++)
	if(coin[i]<=j)
	ways[j]+=ways[j-coin[i]];
	
	
	while(cin>>n)cout<<ways[n]<<endl;

//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
}

