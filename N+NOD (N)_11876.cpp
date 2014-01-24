#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
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
#define INF INT_MAX
typedef  long long int ull;
using namespace std;

int ans[65000]={0};

int nod(int n)
{
    
    int i,ans=1,k=0;
    
    while(n%2 ==0){n/=2;k++;}
    ans=k+1;
    
    for(i=3;i*i<=n;i+=2)
    {
                       k=0;
                       while(n%i==0){k++;n/=i;}
                       ans*=k+1;
    }
    if(n!=1)ans*=2;
    return ans;
}




int main()
{
   //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
  
  int i,j,k=0,t,a,b;
  for(i=1;i<=1000000;i+=nod(i))ans[k++]=i;
  read(t);
  for(i=1;i<=t;i++)
  {
            read(a);read(b);
            j=upper_bound(ans,ans+k,b)-lower_bound(ans,ans+k,a);
            printf("Case %d: ",i);
            write(j);
  }
  
//   system("pause");
   return 0;
}
