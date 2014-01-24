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

vector <string> a,b;
int dp[1000][1000]={{0}};


int main()
{
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
	string x,y;
	int tt=1;
	while(getline(cin,x))
	{
		getline(cin,y);
		
		printf("%2d. ",tt++);
		
		string temp;
		int i,j=x.length();
		for(i=0;i<j;i++)
		{
			if(isalpha(x[i]) || isdigit(x[i]))temp.push_back(x[i]);
			else if(temp.length()){
				                     a.push_back(temp);
				                    // cout<<temp<<endl;
				                     temp.clear();
                                   }
		}
		if(temp.length()){
			a.push_back(temp);
		//	cout<<temp<<endl;
			temp.clear();
		}
		
		j=y.length();
		for(i=0;i<j;i++)
		{
			if(isalpha(y[i]) || isdigit(y[i]))temp.push_back(y[i]);
			else if(temp.length()){
				                     b.push_back(temp);
				                    // cout<<temp<<endl;
				                     temp.clear();
                                   }
		}
		if(temp.length()){
			b.push_back(temp);
			//cout<<temp<<endl;
			temp.clear();
		}
		
		
		int l1=a.size(),l2=b.size();
		
		if(l1==0 || l2==0){printf("Blank!\n");continue;}
		else printf("Length of longest match: ");
		
		int mx=-1;
		int flag=0;
		
		memset(dp,0,sizeof(dp));
		
		for(j=l2-1;j>=0;j--)
		{
		if(flag==0)dp[l1-1][j]=(b[j].compare(a[l1-1])==0);
		else dp[l1-1][j]=1;
		if(dp[l1-1][j]==1)flag=1;
		}
		
		mx=max(mx,flag);
		flag=0;
		
		for(i=l1-2;i>=0;i--)
		{
		
		if(flag==0)dp[i][l2-1]=(b[l2-1].compare(a[i])==0);
		else dp[i][l2-1]=flag;
		if(dp[i][l2-1]==1)flag=1;
	    }
	    
	    mx=max(mx,flag);
	    
	    
		for(i=l1-2;i>=0;i--)
		for(j=l2-2;j>=0;j--)
		if(a[i].compare(b[j])==0)dp[i][j]=1+dp[i+1][j+1];
		else dp[i][j]=max(max(dp[i+1][j],dp[i][j+1]),dp[i+1][j+1]);
		
		if(l1==1 || l2==1)write(mx);
		 else write(dp[0][0]);
		a.clear();
		b.clear();
		
		
	}
//
}

