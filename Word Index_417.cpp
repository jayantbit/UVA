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

int check(string str)
{
    int i=0,j=str.length();
    for(i=1;i<j;i++)
    if(str[i]<=str[i-1])return 0;
    return 1;
}

int fn(int r)
{
    int x=26,y=1;
    for(;y<r;y++)
    {x+=(x-y);
     x/=(y+1);
    }
    return x;
}


int main()
{
string str;
int i,j,l,index;
while(cin>>str)
{
               if(!check(str)){cout<<"0\n";continue;}
               l=str.length();
               index=fn(l-1);
               for(i=0;i<l;i++)
               index+=(str[i]-('a' +i))*fn(l-i-1);
               cout<<index<<endl;
}
return 0;
}
