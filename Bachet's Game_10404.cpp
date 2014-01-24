#include<cstdio>
#include<cstdlib>
#define assign(x,n) x=(int*)calloc(n,4)
#define read(x) scanf("%d",&x)
using namespace std;


int moves[11],*ans,len;

int fn(int n)
{
   
    if(ans[n])return ans[n];
    int i=0;
    for(i=0;i<len;i++)
    if((n-moves[i])>0 && fn(n-moves[i])==2)return ans[n]=1;
    ans[n]=2;
    return ans[n];
}
                                            
int main()
{
int n,i;
while(scanf("%d%d",&n,&len)==2)
{
                  assign(ans,n+1);
                  for(i=0;i<len;i++)
                  {
                                    read(moves[i]);
                                    ans[moves[i]]=1;
                  }
   
   for(i=1;i<=n-1;i++)fn(i);
   if(fn(n)==1)printf("Stan wins\n");
   else printf("Ollie wins\n");
}               

 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);

return 0;
}
