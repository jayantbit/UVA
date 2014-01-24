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
pair <int,double> pr;

map <string,int> mp;



 
int main()
{
int n,i,j,k,m,tt=1;
double d;
string s,a,b;

while(read(n)!=EOF && n)
{
mp.clear();
double cost[31][31]={{0}};

for(i=0;i<n;i++)
{
	cin>>s;
	mp[s]=i;
}
read(m);

for(i=0;i<m;i++)
{
  cin>>a>>d>>b;
  
  cost[mp[a]][mp[b]]=d;	
}

for(k=0;k<n;k++)
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(cost[i][k] && cost[k][j])
cost[i][j]=max(cost[i][j],cost[i][k]*cost[k][j]);

int flag=0;

for(i=0;i<n;i++)
if(cost[i][i] >1.0)flag=1;

if(flag)printf("Case %d: Yes\n",tt++);
else printf("Case %d: No\n",tt++);

}

return 0;




//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);

}

