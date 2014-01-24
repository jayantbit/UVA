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

int dp[301][301]={{0}};
string a,b;
char place[301];
int len;

set <string> ans;
set <string>::iterator it;
map <string,int> mp;




void print(int i,int j,int k)
{

if(k==len+1){
                string temp(place);
                
                if(!mp[temp]){ans.insert(temp);mp[temp]=1;}            
            }


if(i<0 || j<0)return;
if(a[i]==b[j])
{ 
place[len-k]=a[i];
print(i-1,j-1,k+1);
}
else if(dp[i-1][j]>dp[i][j-1])print(i-1,j,k);
else if(dp[i-1][j]<dp[i][j-1])print(i,j-1,k);
else if(dp[i-1][j]==dp[i][j-1])
       {print(i,j-1,k);
         print(i-1,j,k);
       }
     
  
}

int main()
{

int i,j,x,y,t=0;
while(getline(cin,a))
{
                if(t){
                      cout<<endl;
                      getline(cin,a);
                      }
                
                getline(cin,b);
                x=a.length();
                y=b.length();
                
                
                
                for(i=1;i<=x;i++)
                {//cout<<endl;
                for(j=1;j<=y;j++)
                {
                                          if(a[i-1]==b[j-1])dp[i][j]=dp[i-1][j-1]+1;
                                          else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                //cout<<dp[i][j]<<" ";
                }
                }
                len=dp[x][y];
                
                if(len<=1){cout<<"No common sequence.\n";continue;}
                place[len]='\0';
                print(x-1,y-1,1);
                for(it=ans.begin();it!=ans.end();it++)cout<<*it<<endl;
                ans.clear();
                mp.clear();
                t++;
                
}


 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
//getchar();
return 0;
}
