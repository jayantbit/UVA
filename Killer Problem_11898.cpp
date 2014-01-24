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
typedef  long long int ull;
using namespace std;
typedef  pair<int,int> pr;

int main()
{
int n,i,j,ele,q,l,r,mx,pre,ans,t,k;
read(t);

while(t--)
{
             read(n);
             vector <  pr > v;
             
             
             for(i=0;i<n;i++)
             {
                             read(ele);
                             v.push_back(make_pair(ele,i+1));
             }
             sort(v.begin(),v.end());
             read(q);
             while(q--)
             {
                       read(l);read(r);
                       pre=-1;
                       ans=-1;
                       for(i=0;i<n;i++)
                       {
                                      if(v[i].second>=l && v[i].second<=r)
                                      {if(pre==-1)pre=v[i].first;
                                       else {
                                             if(ans==-1)ans=v[i].first-pre;
                                             else ans=min(ans,v[i].first-pre);
                                            pre=v[i].first;
                                           }
                                       }
                          if(ans==0)break;
                       }              
                                              
             write(ans);
             }
                                                                            
}                                                                                    
// system("pause");                                        
return 0;
}
