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

int main()
{
 int n,i,ans;
 while(cin>>n && n)
 {
              cin>>ans;
              n--;
              while(n-- && cin>>i)ans^=i;
              if(ans)cout<<"Yes\n";
              else cout<<"No\n";
 }
              
          //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
return 0;
}
