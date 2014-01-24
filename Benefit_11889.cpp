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





int power(int *x,int y)
{
	int z=0;
	while((*x)%y==0)
	{
		*x/=y;
		++z;
	}
	return z;
}

int main()
{
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);

int t,i,ans,flag,a,c,f1,f2;
read(t);
while(t--)
{
	read(a);read(c);
	ans=flag=1;
	if(c%a){printf("NO SOLUTION\n");continue;}

	for(i=2;i*i<=c;++i)
	{
 st: f2=power(&c,i);
    if(!f2)continue;
	f1=power(&a,i);
	if(f1>f2)
	{
		flag=0;
		break;
	}
	if(f1==f2)continue;
	while(f2--)
	{
		ans*=i;
	}
	
	}
	
	if(c!=1){i=c;goto st;}
	if(a!=1)flag=0;
	
	if(flag)write(ans);
	else printf("NO SOLUTION\n");
	}
}

