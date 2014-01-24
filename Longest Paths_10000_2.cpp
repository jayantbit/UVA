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


int path[101][101]={{0}};

int main()
{
 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
             int n,i,j,k,l,t=0,s;
            while( cin>>n && n)
            {
                   
            for(i=0;i<=n;i++)
            for(j=0;j<=n;j++)
            path[i][j]=0;
            
            cin>>s;
            while(cin>>i>>j && i+j)path[i][j]=1;
            
            
            for(k=1;k<=n;k++)
            for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
            if(path[i][k] && path[k][j])
            path[i][j]=max(path[i][j],path[i][k] + path[k][j]);
            
            l=k=0;
            for(i=1;i<=n;i++)
            if(path[s][i]>l){l=path[s][i];k=i;}
            
            printf("Case %d: The longest path from %d has length %d, finishing at %d.\n\n",t++,s,l,k);
 }
            
            

return 0;
}
