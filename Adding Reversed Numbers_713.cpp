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

int main()
{

int n,x,y,i,j;
cin>>n;
string a,b;
while(n--)
{
          cin>>a>>b;
          x=a.length();
          y=b.length();
          int num1[250]={0};
          int num2[250]={0};
          for(i=0;i<x;i++)num1[i]=a[i]-'0';
          for(i=0;i<y;i++)num2[i]=b[i]-'0';
          num2[0]+=num1[0];
          for(i=1;i<250;i++)
          {
                            num2[i]=num2[i]+num1[i]+num2[i-1]/10;
                            num2[i-1]%=10;
          }
          for(i=249;i>=0;i--)if(num2[i])break;
           for(j=0;j<=i;j++)if(num2[j])break;
          for(;j<=i;j++)cout<<num2[j];
          cout<<endl;
}
          
//getchar();
return 0;
}
