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

int v[80];

int main()
{
int n,i,ans;
while(cin>>n)
{
        
        ans=1;
        n+=2;   
        memset(v,0,sizeof(v));
        v[n]=v[n-1]=v[n-2]=1;
        for(i=n-3;i>=1;i--)
        v[i]=v[i+2]+v[i+3];

          //for(i=1;i<=n;i++)cout<<v[i]<<" ";
          write(v[0]+v[1]);
}
        
             
   
 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
//getchar();
return 0;
}
