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
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
int r,c,col;
ull ans;
while(cin>>r>>c>>col && r+c+col)
{ans=0;
 r-=7;
 c-=7;
 //cout<<r<<" "<<c<<" ";
 if(r==1 && c==1)ans=col;
 if(r==1)ans=c/2 + (c%2)*col;
 else if(c==1)ans=r/2 + (r%2)*col;
 else
 {
 
 if(r%2==0)ans=c*(r/2);
 else ans=(c/2)*(r) +(r/2+ col )*((c%2));
  }
 cout<<ans<<endl; 
}

 
//getchar();
return 0;
}
