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
#define off 50000

int rt[1000001]={0};

vector <int> ans;


int main()
{
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);

int t,m,l,r,begin,i,j,k;
read(t);
while(t--)
{
  
  read(m);
  begin=m+1;
  for(i=-50000;i<=50000;i++)rt[i+off]=-50011;
  ans.clear();
  
  while(scanf("%d%d",&l,&r)!=EOF && !(l==0 && r==0))
  {
  	if(l>=m)continue;
  	rt[l+off]=max(rt[l+off],r);
  	begin=min(begin,l);
  }
  
  l=begin;r=0;
  int pre=-50001;
  while(r<m)
  {
    int mx=-50001,mpos=-50001;
    pre=r;
    for(i=l;i<=r;i++)
    if(rt[i+off]>mx){
    	              mx=rt[i+off];
    	              mpos=i;
                   }
    ans.push_back(mpos+off);
	l=r+rt[mpos+off]>l;
    r=rt[mpos+off];
    if(r==pre)break;
    pre=r;
   
  }

  if(r<m){cout<<"0\n";if(t)cout<<endl;continue;} 
  j=ans.size();
  cout<<j<<endl;
  for(i=0;i<j;i++)
  cout<<ans[i]-50000<<" "<<rt[ans[i]]<<endl; 
  if(t)cout<<endl;	
  
  
}
return 0;
}

