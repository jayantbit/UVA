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
 
int t,p,j,k,ele,i;
cin>>t;
string str;
while(t--)
{
          k=INT_MAX;
          vector <int> ans;
          cin>>p;
          getchar();
          
          for(i=0;i<p;i++)
          {
                          getline(cin,str);
                          stringstream s2(str);
                          j=0;
                          while(s2>>ele)++j;
                          if(j<k){ans.clear();ans.push_back(i+1);k=j;}
                          else if(j==k)ans.push_back(i+1);
          }
          
          j=ans.size();
          for(i=0;i<j;i++)
          {if(i)cout<<" ";
          cout<<ans[i];
          }
          cout<<endl;
          
          
}         
                         
                          
//system("pause");
return 0;
}
