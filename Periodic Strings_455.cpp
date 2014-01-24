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



void preKMP(string pattern,int f[])
{
        int m = pattern.length(),k;
        f[0] = -1;
        for (int i = 1; i<m; i++)
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
        //for(k=0;k<m;k++)cout<<f[k]<<" ";
}
 
int  KMP(string pattern, string target)
{ 
        int m = pattern.length();
        int n = target.length(),found=0;
        int f[m];
        
        preKMP(pattern,f);
        
        int i = 0;
        int k = 0;
        
        while (i<n)
        {
                if (k==-1)
                {
                        i++;
                        k = 0;
                }
                else if (target[i]==pattern[k])
                {
                        i++;
                        k++;
                        if (k==m)
                                {found++;k=0;}
                                
                }
                else
                        k=f[k];
        }
        return found;
}


int main()
{
 //   freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
int n,k,ll,l,ft[100];
string s,p;
//while(cin>>s)preKMP(s+"0",ft);


cin>>n;

while(n--)
{
          cin>>s;
          ll=s.length();
           p=s[0];
          l=1;
          while(l<=ll)
          {
         
          if(ll%l==0 && KMP(p,s)==ll/l)break;
          p+=s[l];
          l++;
          }          
          write(min(l,ll));
          if(n)cout<<endl;
}


 
 //
//system("pause");
return 0;
}
