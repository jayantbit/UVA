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
typedef  long long int ull;
using namespace std;

int s[10001]={0};
 
 
        int find(int i)
{
    
    if(s[i]==i)return i;
    return find(s[i]);
}


int combine(int i,int j)
{
   // if(i>j)swap(i,j);
    i=find(i);
    j=find(j);
    s[i]=j;
    return i!=j;
}


int main()
{
    int t;
    int a,b,n,m,ans,i,tt=1;
    read(t);
    while(t--)
    
    {
              read(n);read(m);
              ans=0;
              for(i=1;i<=n;i++)s[i]=i;
              while(m--)
              {
                        read(a);read(b);
                        ans+=combine(a,b);
              }
               for(i=1;i<=n;i++)cout<<find(i)<<" ";
    printf("Case %d: %d\n",tt++,n-ans+1);
    }
    
  return 0;
  }
              
