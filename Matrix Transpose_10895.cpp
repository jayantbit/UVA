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

int main()
{
 int m,n,i,j,k,*c,ele;
 while(cin>>m>>n)
 {
                 vector < pair<int,int> > col[n];
                 for(i=0;i<m;i++)
                 {
                                 cin>>j;
                                 assign(c,j);
                                 for(k=0;k<j;k++)cin>>c[k];
                                 for(k=0;k<j;k++){
                                                  cin>>ele;
                                                  col[c[k]-1].push_back(make_pair(i+1,ele));
                                                 }
                 }  
                 cout<<n<<" "<<m<<endl;
                 for(i=0;i<n;i++)
                 {
                                 j=col[i].size();
                                 cout<<j;
                                 for(k=0;k<j;k++)cout<<" "<<col[i][k].first;
                                 cout<<endl;
                                 for(k=0;k<j;k++){if(k)cout<<" ";cout<<col[i][k].second;}
                                 cout<<endl;
                 }
 }            
                                 
//system("pause");
return 0;
}
