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
#define write(x) printf("%lld\n",x)
#define assign(x,n) x=(int*)calloc(n,4)
#define rep(i,n) for(i=1;i<=n;++i)
#define max(a,b) ((a)>(b))?(a):(b)
#define INTMAX 2147483647ll
typedef  long long int ull;
/*
1
2147483648212222222222222255892001589355111000232545474836482147483648214748364821474836482147483648
11150352723
*/

char str[205];



ull dp[201][201]={{0}};
ull num[201][201]={{0}};


int main()
{
int i,t,l,j,gap,k;

	  
	  read(t);
	  ull mx;
	  while(t--)
	  {
	  scanf("%s",str);
	  l=strlen(str);
	  
	  for(i=0;i<l;i++)
	  dp[i][i]=num[i][i]=(str[i]-'0');
	  
      
      for(i=0;i<l;i++)
      for(j=i+1;j<l && j<i+10;j++)
      num[i][j]=num[i][j-1]*10 + num[j][j];
      
   
      for(gap=1;gap<l;gap++)
      for(i=0,j=i+gap;i<l && j<l;i++,j++)
      {
      	if(j-i <=9 && num[i][j]<=INTMAX){dp[i][j]=num[i][j];continue;}
      	mx=0;
      	for(k=i;k<j;k++)
        mx=max(mx,dp[i][k]+dp[k+1][j]);
        dp[i][j]=mx;
      	
      }
	  
	  
	  
	  write(dp[0][l-1]);
      }
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
}

