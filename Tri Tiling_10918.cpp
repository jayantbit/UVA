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


ull ans[31]={1,0};

int main()
{
int i;
ans[2]=3;
ans[4]=11;
ans[6]=41;
ans[8]=153;
ull pre=3+11+41+1;
for(i=10;i<=30;i+=2)
{
ans[i]=3*ans[i-2]+2*pre;
pre+=ans[i-2];
}
while(cin>>i && i!=-1)
{
	cout<<ans[i]<<endl;
}


//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
}

