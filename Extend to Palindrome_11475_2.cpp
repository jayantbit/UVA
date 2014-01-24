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


int f[1000000]={0};
void preKMP(string pattern)
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
                                k = f[k];
                }
                f[i] = k + 1;
        }
}
 
int  KMP(string pattern, string target)
{ 
        int m = pattern.length();
        int n = target.length(),found=0;

        
        preKMP(pattern);
        
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
                       // cout<<k<<endl;
                
        }
        return k;
}




int main()
{

string s,ss;
int k;
while(cin>>s)
{
             ss=s;
             reverse(ss.begin(),ss.end());
             k=KMP(ss,s);
             cout<<k<<endl;
             if(k)
             {
                  ss=s.substr(0,s.length()-k);
                  reverse(ss.begin(),ss.end());
                  cout<<s<<ss<<endl;
             }
             else cout<<s<<endl;
}
             
             

 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
//getchar();
return 0;
}
