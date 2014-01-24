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




int main()
{
   //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
   int t,n,i,j,k;
   read(t);
   for(i=1;i<=t;i++)
   {
             read(n);
             printf("Case #%d: %d = ",i,n);
             for(j=2,k=0;j<n/2 && k<2;j++)
             if(n%j ==0)
             {
                    printf("%d * %d",j,n/j);
                    if(k==0)printf(" = ");
                    k++;
             }
             printf("\n");
   }
             
             
             
             
  // system("pause");
   return 0;
}
