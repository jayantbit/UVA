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


string grid[26],s;


int main()
{
   freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
   int t,n,i,j,k,r1,r2;
   cin>>t;
   getline(cin,s);
   getline(cin,s);
   while(t--)
   {
   n=0;
   while(getline(cin,s) && s.length())
   grid[n++]=s;
   
  
   int one[25][25]={{0}};
   
   int ans=0;
   for(i=0;i<n;i++)
   for(j=0;j<n;j++)
   {
                   if(!i && grid[i][j]=='1')one[i][j]=1;
                   else if(grid[i][j]=='1')one[i][j]=one[i-1][j]+1;
   }
   
   
    
   
   for(r1=0;r1<n;r1++)
   {
     int allzero=0,allone=0;
     for(j=0;j<n;j++)
     {
                    
                     
                     int temp2=one[r2][j];
                     if(r1)temp2-=one[r1-1][j];
                     
                     
                     if(temp2== r2-r1+1)allone++;
                     else {
                          
                          ans=max(ans,allone*(r2-r1+1));
                           allone=0;
                          } 
                          
                               
     
      }
      
      ans=max(ans,allone*(r2-r1+1));
      
      
   }
   cout<<ans<<endl;
   if(t)cout<<endl;
   }                       
   
   return 0;
}
