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


int path[1000][1000]={{0}};
vector <int> deaths;

int main()
{
//	freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
	int n,i,j,k,tt=0;
	while(cin>>n)
	{
		if(tt)cout<<endl;
		tt=1;
		if(n==0){cout<<"0\n";continue;}
		assert(n<=1000);
		
		memset(path,0,sizeof(path));
		
		int ans=0;
		for(i=0;i<n;i++)
		{
			cin>>j;
			if(!j){deaths.push_back(i);if(i==0)ans=1;}
			else
			{
				while(j--)
				{
					cin>>k;
					assert(k<n);
					path[i][k]=1;
				}
			}
			
		}
		
		
		for(k=0;k<n;k++)
		for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		if(i!=j && j!=k && i!=k)
		{
			if(path[i][k] && path[k][j] )
			path[i][j]+=(path[i][k]*path[k][j]);
		}
		
		
		//cout<<path[0][3]<<" "<<path[0][3]<<" "<<path[0][10]<<endl;
		for(i=0;i<deaths.size();i++)
		{
		//cout<<deaths[i]<<" "<<path[0][deaths[i]]<<endl;
		ans+=path[0][deaths[i]];
	    }
	    
		cout<<ans<<endl;
		
		
	   deaths.clear();
	   
	   
	}
//
}

