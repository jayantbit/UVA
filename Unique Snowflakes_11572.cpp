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

map <int,int> mp;

int main()
{
	int t,n,st,i,j,len,mx;
	cin>>t;
	while(t--)
	{
		cin>>n;
		st=1;
		len=0;
		mx=0;
		for(i=1;i<=n;i++)
		{
			cin>>j;
			if(mp[j]>=st)
			{st=mp[j]+1;
			 mp[j]=i;
			 len=i-st+1;
				
			}
			else
				{
					mp[j]=i;
					len++;
				}
				//cout<<len<<endl;
				mx=max(mx,len);
		}
		cout<<mx<<endl;
		mp.clear();
			 
			
			
		
		
	}
return 0;
}

	


