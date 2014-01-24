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
 int n,d,pos,i,ans,t,tt=1;
  char *st,ch;
              int *dis,*inactive;
  cin>>t;
 while(t--)
 {
              
              cin>>n>>d;
              assign(dis,n);
              assign(inactive,n);
              st=(char*)calloc(n,1);
              
              for(i=0;i<n;i++)cin>>st[i]>>ch>>dis[i];
              
              
              i=ans=pos=0;
              for(;i<n;)
              {
                               if(st[i]=='B'){ans=max(ans,dis[i]-pos);pos=dis[i];i++;}
                               else {i+=1;
                                     if(i<n && !inactive[i])
                                     {ans=max(ans,dis[i]-pos);pos=dis[i];inactive[i]=1;i++;}
                                    }
                                     
              }
              ans=max(ans,d-pos);
              pos=d;
              for(i=n-1;i>=0;i--)
              if(!inactive[i]){ans=max(ans,pos-dis[i]);pos=dis[i];}
              
              ans=max(ans,pos);
              printf("Case %d: %d\n",tt++,ans);
 }
               
              
                                              
                             
              
 

return 0;
}
