#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
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
#define INF INT_MAX
typedef  long long int ull;
using namespace std;

/*
1 0
2 1
3 1
4 2
5 2
6 2
1    2 3   4 5 6
7 2
1  2 3   4 5 6 7
8 3
1  2 3   4 5  6 7 8


1  2 3  4 5 6  7891011 12131415

*/


int main()
{
   //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
   
   int n,i,j,k;
   while(cin>>n && n)
   {
     j=1;k=0;
     while(j*2<=n){k++;j<<=1;}
     cout<<k<<endl;
   }
  // system("pause");
   return 0;
}
