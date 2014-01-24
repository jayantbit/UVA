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
using namespace std;
typedef  pair<int,int> pr;

vector <int> v[1000001];

int main()
{
	int n,q,i,j,mx,mn;
	while(cin>>n>>q)
	{
		for(i=1;i<=n;i++)
		{
			read(j);
			if(i==1)mx=mn=j;
			else {
				  mx=max(mx,j);
				  mn=max(mn,j);
			     }
		v[j].push_back(i);
		}
		
		while(q--)
		{
		read(j);read(i);	
		if(v[i].size()<j)cout<<"0"<<endl;
		else cout<<v[i][j-1]<<endl;
		}
		for(i=mn;i<=mx;i++)v[i].clear();
	
	}
	return 0;
	
}

