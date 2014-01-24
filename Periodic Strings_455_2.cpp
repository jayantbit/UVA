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
int f[100]={0};

//amanaplanacanallanacanalpanama
void preKMP(string pattern)
{
        int m = pattern.length(),k;
        f[0] = -1;
        for (int i = 1; i<=m; i++)
        {
                k = f[i-1];
                while (k>=0)
                {
                        if (pattern[k]==pattern[i-1])
                                break;
                        else
                                k=f[k];
                }
                f[i] = k + 1;
        }
       // for(k=0;k<=m;k++)cout<<f[k]<<" ";cout<<endl;
}
 


int main()
{
 //   freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
int n,k,ll,l;
string s,p;
read(n);
while(n--)
{
          cin>>s;
          s=s; 
          l=s.length();
          preKMP(s); 
          k=l-f[l];
        // if(l%k)k=l;
          write(k);
          if(n)printf("\n");
}


 
 
//system("pause");
return 0;
}
