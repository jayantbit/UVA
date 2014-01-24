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

int path[101][101]={{0}},ans[101]={0};
string str;

int main()
{
    int n,i,j,k,temp,p;
    stringstream s2;
    while(read(n) && n)
    {
                  memset(path,sizeof(path),0);
                  memset(ans,sizeof(ans),0);
                  while(getline(cin,str) && str[0]!='0')
                  {
                                 s2<<str;
                                 s2>>i;
                                 while(s2>>j){path[i][j]=path[j][i]=1;}
                                 s2.clear();
                  }
                  for(k=1;k<=n;k++)
                  for(i=1;i<=n;i++)
                  for(j=1;j<=n;j++)
                  if(path[i][k] && path[k][j])path[i][j]=1;
                  
                  for(i=1;i<=n;i++)
                  for(j=1;j<=n;j++)
                  {
                                   temp=0;
                                   for(k=1;k<=n;k++)
                                   if(path[i][k] && path[k][j]){
                                                                 p=k;
                                                                 temp+=1;
                                                                }
                                    write(temp);
                                    if(temp==1)ans[p]=1;
                  }   
                  
                  temp=0;
                  for(i=1;i<=n;i++)temp+=ans[n];
                  write(temp); 
    }                                     
                                                  
                                                  
                                 
                                
    
            
 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);

return 0;
}
