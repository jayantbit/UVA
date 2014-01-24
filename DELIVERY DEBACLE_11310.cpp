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
#define write(x) printf("%lld\n",x)
#define assign(x,n) x=(int*)calloc(n,4)
#define rep(i,n) for(i=1;i<=n;++i)
#define max(a,b) ((a)>(b))?(a):(b)
typedef  long long int ull;
using namespace std;
typedef  pair<int,int> pr;

ull ans[41]={1,1,5,0};

int main()
{
 
 int i;
 for(i=3;i<=40;i++)ans[i]=ans[i-1]+4*ans[i-2]+2*ans[i-3];
 int t;
 read(t);
 while(t--)
 {
           read(i);
           write(ans[i]);
 }
 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);

return 0;
}
