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

int main()
{
    int t,n,m,k,p,sum,ele;
    read(t);
    while(t--)
    {
              read(m);read(n);
              sum=0;
              while(n--)
              {
                        read(k);
                        p=1;
                        while(k--){
                                   read(ele);p=(p*ele)%m;
                                   }
                                 // p=(p*ele)%m;
                                  sum=(sum+p)%m;
              }
              write(sum);
    }
                                   

 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);

return 0;
}
