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


int f[1000011]={0};

//amanaplanacanal lanacanalpanama
int preKMP(string pattern)
{

        int m = pattern.length(),k;
        string rev=pattern;
        reverse(rev.begin(),rev.end());
       // cout<<rev<<endl;
        f[0] = -1;
        for (int i = 1; i<=m; i++)
        {
                k = f[i-1];
                while (k>=0)
                {
                        if (rev[k]==pattern[(i-1)])
                                break;
                        else
                                k=f[k];
                }
                f[i] = k + 1;
        }
        return m-f[m];
}



int main()
{

 string s,ss;
 int k;
 
 while(cin>>s)
 {
 ss=s;
 reverse(ss.begin(),ss.end());
 if(s.compare(ss)==0){cout<<s<<endl;continue;}
 k=preKMP(s);
 ss=s.substr(0,k);
 reverse(ss.begin(),ss.end());
 cout<<s<<ss<<endl;
}
 
//system("pause");
return 0;
}
