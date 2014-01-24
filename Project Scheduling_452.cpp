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
int out[30]={0};
int initial[30]={0};


int valid(int i)
{
	if(in[i])return 1;
	if(out[i])return 1;
	if(i==0 || i==27)return 1;
	return 0;
}

int valid2(int i,int j)
{
	return path[i][j];
}

int main()
{
	
	int t;
	string str;
	read(t);
	getchar();
	getline(cin,str);
	while(t--)
	{
	
	memset(path,0,sizeof(path));
	memset(in,0,sizeof(in));
	memset(out,0,sizeof(out));
	memset(initial,0,sizeof(initial));
	string dependstr[27];
	
	char ch;
	int cost,alone=0;
	  
	  while(getline(cin,str) && str.length())
	  {
	  	stringstream s2(str);
	  	
	  	s2>>ch>>cost;
	  	string depend;
	  	initial[ch-'A' +1]=cost;
	  	
	   
	  	if(s2>>depend)
	  	dependstr[ch-'A' +1]=depend;
	  	else alone=max(alone,cost);
      }
	  	
	  	for(int i=1;i<=26;i++)
	  	if(dependstr[i].length())
	  	{
		     for(int j=0;j<dependstr[i].length();j++)
	  		 {  
			   path[dependstr[i][j]-'A'+1][i]=initial[dependstr[i][j]-'A'+1];
		     
			   out[dependstr[i][j]-'A'+1]++;
			   in[i]++;
			 }
	    }
	    
	    for(int i=1;i<=26;i++)
	    if(out[i]==0)
	    path[i][27]=initial[i];
	  	
	  	 int i,j,k;
	  	 
	  	
		  
		  
	    for(k=0;k<=27;k++)
	  	{
	  	
	    for(i=0;i<=27;i++)
	  	for(j=0;j<=27;j++)
	  	{if(i==j || i==k || j==k)continue;
	  	 if( valid2(i,k) && valid2(k,j) && valid(i) && valid(j) && valid(k))
	     path[i][j]=max(path[i][j],path[i][k]+path[k][j]);
	     
        }
         /*
		  for(i=1;i<=6;i++)
	  	{ 
	    for(j=1;j<=6;j++)
	  	 cout<<path[i][j]<<" ";
	  	 cout<<endl;
	     }
	     cout<<endl;
	     */
		 }
	  	
	  	
	    for(i=1;i<=26;i++)
		if(in[i]==0)alone=max(alone,path[i][27]);
	  	cout<<alone<<endl;
	  	if(t)cout<<endl;
	  	
	  }
}


