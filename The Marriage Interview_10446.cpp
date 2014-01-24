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
typedef  unsigned long long int ull;

 /*
 1 5  15 10 5
    5
 0 1    2         3               4
     . . . 0 1   . . 0 1 2    . 0 1 2 3
                  . . . . .       . . . . 2
                                          . . . . .
                                          
0 1
1 1
2 b+ 1 0 -1 -2 -3
3 b+ 2 1 0 
*/




                                          

int main()
{
	
	int n,b,i,j,k,tt=1;
	while(scanf("%d%d",&n,&b)!=EOF && n<=60)
	{
	    ull arr[65]={0};
		arr[0]=arr[1]=1;
		if(n<=1) {printf("Case %d: 1\n",tt++);continue;}
		
		for(i=2;i<=n;i++)
		{
		for(j=1;j<=b;j++)
		{
		  if((i-j)>=2)arr[i]+=arr[i-j];
		  	
		}
		arr[i]+=b;
	    }
	    
	    printf("Case %d: %llu\n",tt++,arr[n]+1);
		
	}
	
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
}

