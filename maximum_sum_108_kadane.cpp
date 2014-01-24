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

int arr[100][100]={{0}},sum[100][100]={{0}};
int main()
{
 int n,i,j,k,ans,p,curr_max;
 
 cin>>n;
 {
 ans=0;
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 {
                 read(arr[i][j]);
                 if(i==0)sum[0][j]=arr[i][j];
 }
 for(i=1;i<n;i++)
 for(j=0;j<n;j++)
 sum[i][j]=sum[i-1][j]+arr[i][j];
 
 
 for(i=0;i<n;i++)
 for(k=1;k<=n-i;k++)
 {curr_max=0;
 for(j=0;j<n;j++)
 {
                 p=sum[i][j];
                 if(i)p-=sum[i-1][j];
                 if(k>1)p+=sum[i+k-1][j]-sum[i][j];
                 curr_max=max(0,curr_max+p);
                 ans=max(ans,curr_max);
                      
 }
 }
                 
 
 
 write(ans);
 
}
//system("pause");
return 0;
}                
                 
 
 
 
 
                 
                 
 
 
 
