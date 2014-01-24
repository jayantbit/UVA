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
typedef  long long int ull;
using namespace std;
/*
a c 
b d 
e a 
c d 
b c 


a b c d e
3 4 3 4 3


*/
map <string,int> mp;
int *cr,*cnt;

int find(int i)
{ if(cr[i]==i)return i;
  return find(cr[i]);
}


void combine(int i,int j)
{
     i=find(i);
     j=find(j);
     cr[i]=j;
}


int main()
{
 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
int c,r,i,j,k;
string str,a,b;
while(cin>>c>>r && c+r)
{
assign(cr,c+1);
for(i=1;i<=c;i++){cr[i]=i;cin>>str;mp[str]=i;}

for(i=0;i<r;i++)
{
                cin>>a>>b;
                j=mp[a];
                k=mp[b];
                combine(j,k);
}

j=1;
assign(cnt,c+1);
for(i=1;i<=c;i++)j=max(j,++cnt[find(cr[i])]);
 cout<<j<<endl;                   
mp.clear();
}                  
           
return 0;
}
