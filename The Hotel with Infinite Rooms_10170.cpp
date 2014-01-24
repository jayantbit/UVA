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
typedef  unsigned long long int ull;
using namespace std;
typedef  pair<int,int> pr;


vector <ull> v;
vector <ull>::iterator it;



    

int main()
{

ull i=0,j,s,n,m;
for(i=0;i<=31622777;i++){
                          j=i*(i+1)/2;
                          v.push_back(j);
                          }
while(cin>>s>>n)
{
                n+=v[s-1];
                m=lower_bound(v.begin(),v.end(),n)-v.begin();
                cout<<m<<endl;
}
                                          
                          
                          
                          
                          
                          

 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);

return 0;
}
