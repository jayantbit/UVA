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

int main()
{
    int t,a,b,c,d,h,m;
string str;
ull ans;
double dis;
read(t);
while(t--)
{
          read(a);read(b);
          dis=0;
          getchar();
          while(getline(cin,str))
          {
                                 //getchar();
                                 if(str.length()<1)break;
                                 stringstream s2(str);
                                 s2>>a>>b>>c>>d;
                                
                                 dis+=sqrt(((c-a)*(c-a) +(d-b)*(d-b))/1000000.0);
                                  
          }
          
          dis*=2.0;
          ans=(ull)(3*dis +0.5);
          h=ans/60;
          m=ans%60;
          printf("%d:%02d\n",h,m);
}
                                 
                                 
                                 
          
 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
system("pause");
return 0;
}
