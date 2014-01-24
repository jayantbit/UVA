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

vector <int> v[3000];
int w[3000]={0};


int main()
{
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
int t,n,m,i,j,k,p;
read(t);
while(t--)
{
	read(n);read(m);
	while(m--)
	{
		cin>>i>>j;
		i--;j--;
		if(i>j)swap(i,j);
		v[i].push_back(j);
	}
	
	int ans=0;
	for(i=0;i<n;i++)
	{  
	    
	   for(j=0;j<v[i].size();j++)w[v[i][j]]=1;
		
	   for(j=0;j<v[i].size();j++)
	   {
	   	p=v[i][j];
	   	
	   for(k=0;k<v[p].size();k++)
	   if(v[p][k]>i)ans+=w[v[p][k]];	
       }
		
	   for(j=0;j<v[i].size();j++)w[v[i][j]]=0;
	   //cout<<i<<" "<<ans;
	}
	
	for(i=0;i<n;i++)
	v[i].clear();
	write(ans);
}

}

