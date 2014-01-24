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

//int v[]={1,'+',2,'*',3};

vector <ull> v;
ull mx[50][50]={{0}};

ull eval_max(ull i,ull j)
{
    if(mx[i][j])return mx[i][j];
    ull k,a,b,c,ans=0,op=0;
    for(k=i+1;k<j;k++)
    if(v[k]>20)
    {
               op=1;
               a=eval_max(i,k-1);
               b=eval_max(k+1,j);
               if((char)v[k]=='*')c=a*b;
               else c=a+b;
               ans=max(ans,c);
    }
    if(!op)ans=v[i];
    mx[i][j]=ans;
    return mx[i][j];
}
                          
ull eval_min(ull i,ull j)
{
    if(mx[i][j])return mx[i][j];
    ull k,a,b,c,ans=4096000000000000ll,op=0;
    for(k=i+1;k<j;k++)
    if(v[k]>20)
    {
               op=1;
               a=eval_min(i,k-1);
               b=eval_min(k+1,j);
               if((char)v[k]=='*')c=a*b;
               else c=a+b;
               ans=min(ans,c);
    }
    if(!op)ans=v[i];
    mx[i][j]=ans;
    return mx[i][j];
}


    
    
int main()
{
 string s;
 ull n,a,b,t;
 char ch;
 cin>>t;
 while(t--)
 {
              cin>>s;
              stringstream s2(s);
              while(s2>>n){v.push_back(n);if(s2>>ch)v.push_back(ch);}
              memset(mx,0,sizeof(mx));
              a=eval_max(0,v.size()-1);
              memset(mx,0,sizeof(mx));
              b=eval_min(0,v.size()-1);
              printf("The maximum and minimum are %lld and %lld.\n",a,b);
              v.clear();
               
 }
              
 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
//system("pause");
return 0;
}
