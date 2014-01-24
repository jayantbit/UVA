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
/*
6 
5 1
4 2(5)
3  1   2  4
   2      3
   3      1
   4      0
2(9) ,1
1
*/  





int main()
{
	
	int v[6],b[6]={1,4,9,16,25,36},i;
	
	
	while(cin>>v[0]>>v[1]>>v[2]>>v[3]>>v[4]>>v[5] && v[0]+v[1]+v[2]+v[3]+v[4]+v[5])
	{
		int sz,s,box=0;
		do
		{
		for(i=5,sz=36;i>=0 && sz>0;i--)
		{
			if(!v[i])continue;
			s=(int)floor(sz/b[i]);
			v[i]-=s;
			sz-=s*b[i]; 
		}
		box++;
	   }while(v[0]+v[1]+v[2]+v[3]+v[4]+v[5]);
	   write(box);
   }
		
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
}

