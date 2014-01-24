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

ull p(ull a,ull b)
{
    ull k=0;
    while(b!=1)
    {
               if(b%a)return -1;
               b/=a;
               k++;
    }
    return k;
}
                
void fn(ull a,ull c)
{
    ull n,k;
    for(n=1;;n++)
    {
                 k=p(n+1,a);
                 if(k!=-1 && (ull)pow((double)n,(double)k)==c)
                 {
                          if(n<=1)cout<<k;else cout<<(c-1)/(n-1);
                          cout<<" "<<a+(n)*(a-c)<<endl;break;
                 }
    }
}

int main()
{

ull h,m,n,k;
while(cin>>h>>m && h && m)
fn(h,m);
                
                
                
 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
//getchar();
return 0;
}
