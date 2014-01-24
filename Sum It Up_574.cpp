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

int arr[15],t,n;
int  ans[15],found;


int fn(int target,int start=0,int place=0)
{
	int pos=start;
	if(target==0)	{  
	               int i;
	               for(i=0;i<place;i++)
	               {
				   if(i)cout<<"+";
				   cout<<ans[i];
			       }
	               cout<<endl;
				   found=1;
				   return 1;
	              }
	while(pos<n)
	{
		if(arr[pos]<=target)
		{
	    ans[place]=arr[pos];
		fn(target-arr[pos],pos+1,place+1);
		}
		do
		{
		pos++;
	    }while(pos<n && arr[pos]==arr[pos-1]);
	}
}
	



int main()
{
	int i,j,k;
	while(scanf("%d%d",&t,&n)!=EOF && n)
	{
	  for(i=0;i<n;i++)cin>>arr[i];
	  found=0;
	  printf("Sums of %d:\n",t);
	  fn(t);
	  if(!found)printf("NONE\n");
	
	}
	
return 0;
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
}

