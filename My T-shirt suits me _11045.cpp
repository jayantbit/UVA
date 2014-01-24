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

int cnt[6]={0};
int *c1,*c2,n;

int conv(string s)
{
    string op[6]={"XXL", "XL", "L", "M" , "S","XS"};
    int i;
    for(i=0;i<6;i++)
    if(op[i].compare(s)==0)return i;
}


int dist(int k)
{
    if(k>=n)return 1;
    if(cnt[c1[k]]==0 && cnt[c2[k]]==0)return 0;
    if(cnt[c1[k]]){
                   cnt[c1[k]]--;
                   if(dist(k+1))return 1;
                   cnt[c1[k]]++;
                   }
    if(cnt[c2[k]]){
                   cnt[c2[k]]--;
                   if(dist(k+1))return 1;
                   cnt[c2[k]]++;
                   }
      return 0;
}             
                  
                    
    
    


int main()
{
 int i,p,t;
 string a,b;
 cin>>t;
 while(t--)
 {
 cin>>p>>n;
 p/=6;
 for(i=0;i<6;i++)cnt[i]=p;
 assign(c1,n);
 assign(c2,n);
 for(i=0;i<n;i++)
 {
                 cin>>a>>b;
                 c1[i]=conv(a);
                 c2[i]=conv(b);
 }
 if(dist(0))cout<<"YES\n";
 else cout<<"NO\n";
}
 
 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);

//system("pause");

return 0;
}
