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
typedef pair <int,int> pr;


vector <pr> ans;


int main()
{
	string str;
	int i,j,k,num,p,x,y;
//	freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
	
	while(getline(cin,str))
	{
		num=1;
		
		stringstream s2(str);
		
		
		while(s2>>x)
		{
			
			if(!x)return 0;
			s2>>y;
			while(y--)
			num*=x;
		}
		num--;
		
		for(x=2;x*x<=num;x++)
		{
			y=0;
			while(num%x ==0){num/=x;y++;}
			if(y)ans.push_back(make_pair(x,y));
		}
		if(num!=1)ans.push_back(make_pair(num,1));
		
		i=j=ans.size()-1;
		for(;i>=0;i--)
		{
			if(i!=j)printf(" ");
			printf("%d %d",ans[i].first,ans[i].second);
		}
		printf("\n");
		ans.clear();
	}
	
	return 0;
	
//
}

