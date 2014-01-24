#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
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
#define INF INT_MAX
typedef  long long int ull;
using namespace std;


ull arr[100][100]={{0}};

int main()
{
 
   int n,i,j,k,t;
   read(t);
   for(k=1;k<=t;k++)
   {
             scanf("%*s%*s%d",&n);
             
            
             int flag=1;
             for(i=0;i<n;i++)
             for(j=0;j<n;j++)
             {
                             scanf("%lld",&arr[i][j]);
                             if(arr[i][j]<0)flag=0;
             }
             if(flag)
             {
                     int x,y;
             for(i=0;i<n && flag;i++)
             for(j=0;j<n;j++)
             {
                             x=n-1 -i;
                             y=n-1 -j;
                             if(arr[i][j]!=arr[x][y]){flag=0;break;}
             }
             
             }
             
             printf("Test #%d: ",k);
             if(flag)cout<<"Symmetric.\n";
             else cout<<"Non-symmetric.\n";
   }
                             
             
             
   
   //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
   system("pause");
   return 0;
}
