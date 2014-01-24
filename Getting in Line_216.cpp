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
using namespace std;
typedef  pair<int,int> pr;

struct st
{
	int x,y;
	st(int a,int b)
	{
	x=a;y=b;
	}
	st(){;}
	
};

int b,call,flag2;
double cost[11][11],mn;
int path[11][11];
vector <st> v;


double dist(int s,int *temppath,int state=1,double len=0,int place=1)
{

//cout<<s<<" "<<state<<" "<<len<<endl;getchar();
int i,flag=1;
double ans=-1.0,temp;
for(i=0;i<b;i++)
{
	if((!!(state&(1<<i)))==0){
							  temppath[place]=i;
							  temp=dist(i,temppath,state|(1<<i),len+cost[s][i],place+1);
							  if(temp<ans || ans==-1.0)
							  			  {
							              ans=temp;
							             
										  }
						      flag=0;
							 }
						 
}
if(flag){
		 if(flag2 || len<mn){
		                     flag2=0;
		                     mn=len;
		                     for(i=1;i<place;i++)path[call][i]=temppath[i];
		                     
							 }
		 
		 return len;
         }
return ans;	
}


int main()
{
	int i,j,k,n,tt=1;
	
	while(cin>>b && b)
	{
	
	for(i=0;i<b;i++)
	{
		cin>>j>>k;
		v.push_back(st(j,k));
	}
	
	for(i=0;i<b;i++)
	for(j=i+1;j<b;j++)
	cost[i][j]=cost[j][i]=sqrt((v[j].x-v[i].x)*(v[j].x-v[i].x)+(v[j].y-v[i].y)*(v[j].y-v[i].y)) +16.0;
	
	
	double ans,temp;
	int pos=-1;
	for(call=0;call<b;call++)
	{
	path[call][0]=call;
	flag2=1;
	int tmp[12]={0};
	temp=dist(call,tmp,1<<call);
	if(pos==-1 || temp<ans)
			   {
			   	pos=call;
			    ans=temp;
			   }
	}
	
	
	printf("**********************************************************\nNetwork #%d\n",tt++);
	for(i=0;i<b-1;i++)
	{
	j=path[pos][i];
	k=path[pos][i+1];
	printf("Cable requirement to connect (%d,%d) to (%d,%d) is %0.2lf feet.\n",v[j].x,v[j].y,v[k].x,v[k].y,cost[j][k]);
    } 
	printf("Number of feet of cable required is %0.2lf.\n",ans);

	v.clear();
    }
	
	
	
return 0;
	
	
}

