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

int least[10][10]={{0}};
int most[10][10]={{0}},n;

int place[10]={0},pos[10]={0},ans;

int fn(int k)
{
	int i,j;
	if(k==n){
		      ans++;
		      return 0;
	        }
	  if(k==0)  
	  {
	  	for(i=0;i<n;i++)
	  	{
	  		if(place[i]==-1)
	  		{
	  			place[i]=k;
	  			pos[k]=i;
	  			fn(k+1);
	  			place[i]=-1;
	  		}
	  		
	  	}
      }
	  else
	  {
	  	
	  	for(i=0;i<n;i++)
	  	{
	  		if(place[i]!=-1)continue;
	  		int flag=1,temp;
	  		for(j=0;j<k;j++)
	  		{
	  			   temp=abs(i-pos[j]);
				  if(temp<least[k][j] || temp>most[k][j]){flag=0;break;}
	  		}
	  		if(flag)
	  		{
	  			place[i]=k;
	  			pos[k]=i;
	  			fn(k+1);
	  			place[i]=-1;
	  		}
	  	}
      
	  }    
}



int main()
{
	
	int m,c,i,j,k;
	//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
	while(cin>>n>>m && n+m)
	{
	     for(i=0;i<n;i++)
	     for(j=0;j<n;j++)
	     { least[i][j]=1;
	       most[i][j]=n;
	     }
	     
		
		while(m--)
		{
			read(i);read(j);read(k);
			if(k<0)least[i][j]=least[j][i]=max(least[i][j],-k);
			else most[i][j]=most[j][i]=min(most[i][j],k);
		}
		
		for(i=0;i<n;i++){place[i]=-1;pos[i]=0;}
		
		
		
		ans=0;
		fn(0);
		write(ans);
	}
//
}

