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

ull dp[70][70][2]={{{0}}};

ull fn(int n,int s,int l)
{
     
    if(n < 0 || s < 0 || s > n)return 0;
    if(n==0 && s==0 && l==0)return 1;
    else if(n)
    {
         if(dp[n][s][l])return dp[n][s][l];
    if(l==1)return dp[n][s][l]=fn(n-1,s-1,1)+fn(n-1,s-1,0);
    else return dp[n][s][l]=fn(n-1,s+1,1)+fn(n-1,s,0);
    }
    else return 0;
}

int main()
{
int n,s,p;



for(n=1;n<=65;n++)
for(s=0;s<=n;s++)
{fn(n,s,0);fn(n,s,1);}


while(cin>>n>>s && !(n<0 && s<0))cout<<dp[n][s][0]+dp[n][s][1]<<endl;;
                                  
                                   //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
//getchar();
return 0;
}
