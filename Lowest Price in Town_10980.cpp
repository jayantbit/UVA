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


double price[101]={0.0};
double rem[101]={0};


double fn(int k)
{
	
	int i;
	if(k<=0)return 0;
	if(rem[k]!=-1.0)return rem[k];
	double ans=INT_MAX;
	for(i=1;i<=100;i++)
	{
	if(price[i]==-1.0)continue;
	ans=min(ans,price[i]+fn(k-i));
	}
	rem[k]=ans;
	return rem[k];
}

int main()
{
int n,m,i,j,k,tt=1;
double p;
string s;
while(scanf("%lf%d",&price[1],&m)!=EOF)
{
	
	for(i=2;i<=100;i++)price[i]=rem[i]=-1.0;
	rem[1]=-1.0;
	
	for(i=0;i<m;i++)
	{
		scanf("%d%lf",&n,&p);
		if(price[n]==-1 || price[n]>p)price[n]=p;
	}
	getchar();
	getline(cin,s);
	stringstream s2(s);
	
	
	
	
	
	printf("Case %d:\n",tt++);
	
	
	
	while(s2>>k)
	{
		printf("Buy %d for $%0.2lf\n",k,fn(k));
	}
	
}


}

