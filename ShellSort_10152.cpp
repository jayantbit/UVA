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

map <string,int> mp;
vector <string> v;



int main()
{
	int t,n,i,j;
	//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
	read(t);
	string temp;
	while(t--)
	{
		read(n);
		
		getchar();
		for(i=0;i<n;i++)
		{
			getline(cin,temp);
			mp[temp]=(n-1)-i;
		}
		
		for(i=0;i<n;i++)
		{
			getline(cin,temp);
			v.push_back(temp);
		}
		
		int st=-1,pos;
		
		for(i=n-1;i>=0;i--)
		{
			pos=mp[v[i]];
			if(pos<=st)break;
			st=pos;
        }
        
        for(;i>=0;i--)
        cout<<v[i]<<endl;
        mp.clear();
        v.clear();
        cout<<endl;
	}
//
}

