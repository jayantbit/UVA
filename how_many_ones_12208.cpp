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

int ones(int n)
{
	if(!n)return 0;
	return 1+ones(n&(n-1));
}

vector <ull> rem(10000000);

ull fn(int n)
{
	
	if(!n)return 0;
	
	if(n<10000000)
	{
	if(rem[n])return rem[n];
	if(n&1)return rem[n]=(n+1)/2 +2*fn(n/2);
	else return rem[n]=ones(n)+fn(n-1);
	}
	
	if(n&1)return (n+1)/2 +2*fn(n/2);
	else return ones(n)+fn(n-1);
}



/*
0 000
1 001
  010
  011
  100
  101
  110
  111
 1000 
 1001
 1010
 1011
 1100
 1101
 1110
 1111
10000 
*/

int main()
{
	int a,b;
	int n,t=1;
	ull ans;
	
	while(cin>>a>>b && a+b)
	{ 
		ans=fn(b);
		if(a)ans-=fn(a-1);
		printf("Case %d: %lld\n",t++,ans);
		
	}


//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
}

