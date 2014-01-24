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
typedef  pair<double,double> pr;


vector <pr> v;


bool comp(pr a,pr b)
{
     if((b.first-a.first)>1e-9)return true;
     return false;
}
          
     
int main()
{
 
 int n,sz,i,j;
 double ans,x,y,xx,yy;
 while(cin>>n && n)
 {
 ans=50000.0*50000.0 +1;
 

 sz=n;
 while(sz--)
 {
           cin>>x>>y;
           v.push_back(make_pair(x,y));
 }
 
 sort(v.begin(),v.end(),comp);
 for(i=0;i<n;i++)
 for(j=i+1;j<n;j++)
 {
                    xx=(v[j].first-v[i].first)* (v[j].first-v[i].first);
                    if(xx>ans)break;
                    yy=(v[j].second-v[i].second)* (v[j].second-v[i].second);
                   
                    if(ans-xx-yy>1e-9)ans=xx+yy;
 }
 
 ans=sqrt(ans);
 if (ans < 10000 || fabs(ans - 10000) < 1e-7) printf("%0.4lf\n",ans);
 else cout<<"INFINITY\n";
 v.clear();
}
//system("pause");
return 0;
}
