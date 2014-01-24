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

int h[1600],w[1600];
ull lis[1600]={0};
/*
2
4 3
1 2
*/


int main()
{
	int t,n,temp,tt=1,i,j;
	read(t);
	while(t--)
	{
		read(n);
		int mx;
		for(i=0;i<n;i++)
		{
			read(h[i]);
			
			
		}

        for(i=0;i<n;i++)
		{
			read(w[i]);
			if(i==0)mx=w[i];
			else mx=max(mx,w[i]);
			
		}
		
		for(i=0;i<n;i++)lis[i]=w[i];
		
		
		ull ans1=lis[0];
		
		for(i=1;i<n;i++)
		{
		for(j=0;j<i;j++)
		if(h[j]<h[i])lis[i]=max(lis[i],lis[j]+w[i]);		
		//cout<<lis[i]<<endl;
		ans1=max(ans1,lis[i]);
	    
		}
	    
	    
	    for(i=0;i<n;i++)lis[i]=w[i];
		
		
	    ull ans2=lis[n-1];
	    
	    for(i=n-2;i>=0;i--)
	    {
		for(j=i+1;j<n;j++)
	    if(h[j]<h[i])lis[i]=max(lis[i],lis[j]+w[i]);
	    ans2=max(ans2,lis[i]);
	    }
	    
	    
	   if(ans1>=ans2) printf("Case %d. Increasing (%lld). Decreasing (%lld).\n",tt++,ans1,ans2);
	   else printf("Case %d. Decreasing (%lld). Increasing (%lld).\n",tt++,ans2,ans1); 
	
	}

//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
}

