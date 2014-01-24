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


int fn(char *a,char *b)
{
    int n=0;
    while(*a==*b && *a!='\0' && *b!='\0'){n++;a++;b++;}
    return n;
}

set <string> ans;
set <string>::iterator it;

int main()
{
 
 char a[301],b[301];
 int x,y,i,j,k,l,rem,t=0;
 string temp;
 
 while(gets(a))
 {
 if(t){gets(a);cout<<endl;}
 gets(b);
 x=strlen(a);y=strlen(b);
 string test(a);
 rem=0;
 
 for(i=0;i<x;i++)
 for(j=0;j<y;j++)
 {                   l=fn(a+i,b+j);
                     if(l>=rem && l)
                     {
                     temp=test.substr(i,l);
                     
                     if(l>rem)ans.clear();
                     ans.insert(temp);
                     rem=l;
                     }
 }
 if(ans.size()==0)cout<<"No common sequence.\n";
 else for(it=ans.begin();it!=ans.end();it++)cout<<*it<<endl;  
 ans.clear();
  t++;
  }
              
                   
 
 
 
 
 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
//getchar();
return 0;
}
