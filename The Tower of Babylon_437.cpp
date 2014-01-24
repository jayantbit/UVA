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
typedef  long long int ull;
using namespace std;
typedef  pair<int,int> pr;


map<int, map<int, map<int,int> > >dp ;


struct block
{
       int l,b,h;
       block(int x,int y,int z)
       {
                 l=x;
                 b=y;
                 h=z;
       }
       block(){}
};
                 
int n,ans;
vector <block> v;

int f(int r,int c,int h)
{
    if(dp[r][c][h])return dp[r][c][h];
    int i,j=0;
    for(i=0;i<6*n;i++)
    if(v[i].l<r && v[i].b<c)j=max(j,f(v[i].l,v[i].b,v[i].h));
    j+=h;
    dp[r][c][h]=j;
    return dp[r][c][h];
}
    
    

     
     




int main()
{
  int i,j,k,l,b,h,t=0;
  while(scanf("%d",&n)!=EOF && n)
  {
               for(i=0;i<n;i++)
               {
                             read(l);read(b);read(h);
                               v.push_back(block(l,b,h));
                               v.push_back(block(b,h,l));
                               v.push_back(block(h,l,b));
                               v.push_back(block(b,l,h));
                               v.push_back(block(h,b,l));
                               v.push_back(block(l,h,b));
                               
               }
           
  
  ans=0;
  for(i=0;i<6*n;i++)ans=max(ans,f(v[i].l,v[i].b,v[i].h)); 
  printf("Case %d: maximum height = %d\n",++t,ans);
  dp.clear();
  v.clear();
}
             
  
 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
//getchar();
return 0;
}
