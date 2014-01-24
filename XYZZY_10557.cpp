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
#include<cassert>
#define read(x) scanf("%d",&x)
#define write(x) printf("%d\n",x)
#define assign(x,n) x=(int*)calloc(n,4)
#define rep(i,n) for(i=1;i<=n;++i)
#define max(a,b) ((a)>(b))?(a):(b)
typedef  long long int ull;
typedef pair<int,int> pr;


int path1[101][101]={{0}};
int path2[101][101]={{0}};

int energy[101]={0};

int main()
{
	
freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);

int n,i,j,k,l;
while(cin>>n && n!=-1)
{
	for(i=0;i<=n;i++)
	for(j=0;j<=n;j++)
	{ path1[i][j]=INT_MIN;
	  path2[i][j]=0;
    }
	
	
	
	
	
	for(i=1;i<=n;i++)
	{
		read(j);read(k);
		
		energy[i]=j;
		while(k--)
		{
			read(j);
			path2[i][j]=1;
		}
		
	}
	
	path2[0][1]=1;
	path1[0][1]=100;
	
	for(i=0;i<=n;i++)
	for(j=0;j<=n;j++)
	if(path2[i][j])
	path1[i][j]=energy[j];
	

	
	
	for(k=1;k<n;k++)
	for(i=0;i<=n;i++)
	for(j=0;j<=n;j++)
	if(path2[i][k] && path2[k][j] && k!=i && k!=j)
	path2[i][j]=1;
	
	
	for(k=1;k<n;k++)
	for(i=0;i<=n;i++)
	for(j=0;j<=n;j++)
	if(path1[i][k]!=INT_MIN && path1[k][j]!=INT_MIN )
	{  
       if(path1[i][k] + path1[k][j]>0)
	   path1[i][j]=max(path1[i][j],path1[i][k] + path1[k][j]);
	}
	
	
	int flag=1;
	if(path1[0][n]>0){cout<<"winnable\n";continue;}
	
    for(i=1;i<=n-1;i++)
	if(path1[0][i]>0 && path1[i][i]>0 && path2[i][n]){cout<<"winnable\n";flag=0;break;}
	
	if(flag)cout<<"hopeless\n";
}

}

