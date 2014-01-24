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


ull f1(ull n)
{
    while(n>=10)n/=10;
    return n*(n+1)/2;
}


ull f2(ull num)
{
    if(num<0)return 0;
    ull ans=0,k=10,i;
 do
 {
        i=num/k;
        if(!i)ans+=f1(num/(k/10));
        else ans+=i*45 +f1((num/(k/10))%10);
        k*=10;
 }while(i);
 return ans;
}

int main()
{
ull n,m,ans;
while(cin>>n>>m )
{if(n<0 && m<0)return 0;
                ans=f2(m)-f2(n-1);
cout<<ans<<endl;
}

return 0;
}
