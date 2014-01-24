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

int main()
{
    int t,tt=0,r,c,x,y;
    char *str[2]={"Hansel","Gretel"};
    cin>>t;
    while(t-- && cin>>r>>c>>x>>y)printf("%s\n",str[!!(x^y^(r-x-1)^(c-y-1))]);
   //xor the number of  cuts that can be made along each direction            


return 0;
}    
