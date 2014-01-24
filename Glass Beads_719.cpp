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

string s,ans,temp;
int l;
int m;

int disjoint(int n)
{
    int i=0,j=n-1,k=0;
    temp.clear();
    m=0;
    for(i=0;i<l;i++)
    {
           if(s[j]>ans[i] && !k)return 0;
           if(s[j]<ans[i])k=1;
           ans[i]=s[j];
           j=(j+1)%l;
           m++;
    }
    return k;
}
             
    
    
       


int main()
{
  int i,pos,n;
  cin>>n;
  while(n-- && cin>>s)
  {
               l=s.length();
               ans=s;
               pos=1;
               for(i=2;i<=l;)
               if(disjoint(i)){pos=i;i++;}
               else i+=m+1;
               cout<<pos<<endl;
  }
               
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
//getchar();
return 0;
}
