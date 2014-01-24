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

int path[30][30]={{0}};
int in[30]={0};
int initial[30]={0};

int visited[30]={0},ans;



int dfs(int s,int k)
{
	
	visited[s]=1;
	int found=0,i;
	
	for(i=1;i<=26;i++)
	if(path[s][i] && !visited[i])
	{
		found=1;
		dfs(i,k+path[s][i]);
		//visited[i]=0;
		
	}
	if(!found)
	ans=max(ans,k+initial[s]);
	visited[s]=0;
	
}




int main()
{ 
    freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
	
	int t,i;
	string str;
	read(t);
	getchar();
	getline(cin,str);
	while(t--)
	{
	
	memset(path,0,sizeof(path));
	memset(in,0,sizeof(in));
	memset(initial,0,sizeof(initial));
	memset(visited,0,sizeof(visited));
	
	
	char ch;
	int cost=0;
	  
	  while(getline(cin,str) && str.length())
	  {
	  	stringstream s2(str);
	  	
	  	s2>>ch>>cost;
	  	string depend;
	  	initial[ch-'A' +1]=cost;
	  	
	   
	  	if(s2>>depend)
	  	{
	  		
	  		for(i=0;i<depend.length();i++)
	  		{
	  			path[ch-'A' +1][depend[i]-'A' +1]=cost;
	  			in[depend[i]-'A' +1]++;
	  		}
	  	}
	  	
	
      }
	  	
	  	cost=0;
	  	
	  	for(i=1;i<26;i++)
	  	if(in[i]==0)
	  	{
	  		ans=0;
	  		dfs(i,0);
	  		cost=max(cost,ans);
	  	}
	  	
	  	
	  	cout<<cost<<endl;
	  	if(t)cout<<endl;
	  	
	  }
}


