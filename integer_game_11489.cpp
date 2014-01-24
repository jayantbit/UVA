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

//WL rule & maths

int sod(string s)
{
    int sum=0,i=0,j=s.length();
    for(i=0;i<j;i++)
    sum+=s[i]-'0';
    return sum;
}
    

int check(string s)
{
    int sum=0,i=0,j=s.length();
    for(i=0;i<j;i++)
    sum+=!((s[i]-'0')%3);
    return sum%2;
}    


int fn(string n,int k)
{
    
    int l=n.length();
    if(l<2)return 1;
    int d,i;
    string temp;
    for(i=0;i<l;i++)
    {
          d=n[i];
          if((k-d)%3==0)
          {temp=n.substr(0,i)+n.substr(i+1);
          if(check(temp)==0)return 1;
          } 
    }
    return 0;
}    
               
int main()
{
    int t,tt=0;
    char *str="TS";
    cin>>t;
    string n;
    while(t-- && cin>>n)printf("Case %d: %c\n",++tt,str[fn(n,sod(n))]);
              


return 0;
}    

