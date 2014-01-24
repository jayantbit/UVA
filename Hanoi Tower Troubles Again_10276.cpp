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

int *arr;
int perfect(int n)
{
    int j=sqrt(n);
    return (j*j)==n;
}
int main()
{
 int n,i,j,k,t;
 cin>>t;
 while(t-- && cin>>n)
 {
              assign(arr,n);
              for(i=1;;i++)
              {
                           k=0;
                           for(j=0;j<n;j++)
                           if(arr[j]==0 || perfect(arr[j]+i)){arr[j]=i;k=1;break;}
                           if(!k)break;
              }
              cout<<i-1<<endl;
 }
                           
//system("pause");
return 0;
}
