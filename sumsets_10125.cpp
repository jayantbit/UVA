using namespace std;
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
#define max(a,b) ((a)>(b))?(a):(b)
typedef  long long int ull;
 
 struct st
{
       int val,i,j;
       st(){;}
       st(int x,int y,int z)
       {
        val=x;
        i=y;
        j=z;
       }
}; 
 
 
 
 
vector  <st>sum,diff;
int arr[1001]={0},ld,ans,found;
 
bool comp(st a,st b){return a.val<b.val;}

bool comp2(st a,st b){
                      if(a.val<b.val)return true;
                      if(a.val==b.val && a.i<b.i)return true;
                      return false;
                     }
 
 
 
 
 
 
int find(int val,int end)
{

st temp(val,0,0);
int pos=lower_bound(diff.begin(), diff.end(), temp,comp)-diff.begin();

if(pos>ld-1 || diff[pos].val!=val)return -1;

while(pos <ld && diff[pos].val==val){
                                      if(diff[pos].i>end && diff[pos].j >end)
									  {
									  // cout<<"found "<<val<<endl;
									   if(!found)ans=arr[diff[pos].i];
									   else ans=max(ans,arr[diff[pos].i]);
									   found=1;
								      }
                    pos++;
                    }

return 1;
}




int main()
{
    
    int t,i,j,k,n,l,val;
    while(scanf("%d",&n)!=EOF && n)
    {
                              
                for(i=0;i<n;i++)
                              scanf("%d",&arr[i]);
                             
                              
                              
							  
							  
							  for(i=0;i<n;i++)
                              for(j=0;j<n;j++)
                              if(i!=j)
							  {
                                                sum.push_back(st(arr[i]+arr[j],i,j));
                                                diff.push_back(st(arr[i]-arr[j],i,j));
         
                              }
                              
                              
                              
                             
                              ld=n*n;;
                               sort(diff.begin(),diff.end(),comp2);
                              
                              
                   
				  
                              
                              
                              
                              l=n*n;
                              int p;
                              found=0;
                              for(k=0;k<l;k++)
                              {
                                              val=sum[k].val;
                                              i=sum[k].i;
                                              j=sum[k].j;
                                              
                                             // cout<<val<<" ";
                                              p=find(val,max(i,j));
                                             // cout<<p<<endl;
                                              
                              }
                              if(!found)printf("no solution\n");
                              else  write(ans);
                              sum.clear();
                              diff.clear();
                             
    }
                              
return 0;                              
 
}                 
