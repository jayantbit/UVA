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
#define assign(x,n) x=(bool*)calloc(n,1)
#define rep(i,n) for(i=1;i<=n;++i)
typedef  long long int ull;
using namespace std;
typedef  pair<int,int> pr;
vector <int> v;
vector <int>::iterator it;

int main()
{
 
 int n,m,ele,count,k;
 while(cin>>n>>m && n+m)
 {              
                
                 k=n;
                 while(n--){
                            read(ele);
                            v.push_back(ele);
                            }
                            count=0;
                 while(m--){
                            read(ele);
                            it=lower_bound(v.begin(),v.end(),ele);
                            if(*it==ele)count++;
                            }
                            cout<<count<<endl;
 v.clear();
 }
                            
                            
 
 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
//system("pause");
return 0;
}
