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
typedef  pair<int,int> pr;

int main()
{
 
 int n,m,k,i,j;
 while(cin>>n>>m)
 {
                  vector <int> val(n);
                  
                  j=0;
                  for(i=0;i<n;i++){cin>>val[i];j=max(j,val[i]);}
                  
                  vector < vector<int> > v(j+1);
                  for(i=1;i<=n;i++)
                  {
                                   j=val[i-1];
                                   v[j].push_back(i);
                  }
                  for(i=0;i<m;i++)
                  {
                                  read(k);read(j);
                                  if(v[j].size()<k)write(0);
                                  else write(v[j][k-1]);
                  }
}                               
                  
                                 
 
 
return 0;
}
