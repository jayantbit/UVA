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

vector < pair<vector <int>,int > > v; 
int dp[35]={0};
int parent[35]={0};


int in(int x,int y)
{
	
	int i;
	int l=v[x].first.size();
	for(i=0;i<l;i++)
	if(v[x].first[i]>=v[y].first[i])return 0;
	return 1;
}
	



int main()
{
int k,n,i,j,dim;

while(scanf("%d%d",&k,&n)!=EOF)
{
for(i=0;i<k;i++)
{
	vector <int> box;
	for(j=0;j<n;j++)
	{
		cin>>dim;
		box.push_back(dim);
	}
	sort(box.begin(),box.end());
	v.push_back(make_pair(box,i+1));

   dp[i]=1;
   parent[i]=-1;
}
sort(v.begin(),v.end());
int ans=1,mpos=0,mx;

for(i=1;i<k;i++)
{
 				mx=0;	
				for(j=0;j<i;j++)
				if(in(j,i) && dp[j]>mx)
				{
				 		   mx=dp[j];
						   parent[i]=j;
	            }
dp[i]=mx+1;
if(dp[i]>ans){
			  	ans=dp[i];
			  	mpos=i;
              }
}

cout<<ans<<endl;
vector<int> order;
while(mpos!=-1)
{
	
	order.push_back(v[mpos].second);
	mpos=parent[mpos];
}
j=0;





for(i=order.size()-1;i>=0;i--)
{
	if(j)cout<<" ";
	cout<<order[i];
	
	j=1;
}
cout<<endl;
v.clear();
}

return 0;


}
