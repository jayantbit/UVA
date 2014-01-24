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

struct point
{
	int x,y;
	point(){;}
	point(int a,int b)
	{
		x=a;
		y=b;
	}
};


struct eg
{
	int u,v;
	double w;
	eg(){;}
	eg(int a,int b,double dd)
	{
		u=a;
		v=b;
		w=dd;
	}
};

bool comp(eg x,eg y)
{
  return x.w<y.w;
}

vector <eg> edge;
vector <point>  points; 
vector <int> cluster[1001];
int group[1001];





int find(int i) 
{
if(group[i]==i)return i;
return find(group[i]);	
}


int combine(int i,int j)
{
	if(i>j)swap(i,j);
	i=find(i);
	j=find(j);
	if(i==j)return 0;
	group[i]=j;
	return 1;
}


int dist(int i,int j)
{
	
	int xdiff=points[j].x-points[i].x;
	int ydiff=points[j].y-points[i].y;
	return xdiff*xdiff +ydiff*ydiff;
}


double kruskal() 
{
      sort(edge.begin(),edge.end(),comp);
      double  cost=0.0;
      int i,j=0,k,m=0,x,y;
      
      for(i=0;i<edge.size();i++)
      {
                                if(combine(edge[i].u,edge[i].v))
                                cost+=edge[i].w;
                                
      }
      
   return cost;
}




int main()
{
	int t,n,r,x,y,i,j,k,a,b,tt=1;
	read(t);
	while(t--)
	{
		read(n);
		read(r);
		k=0;
		
		for(i=0;i<n;i++)
		{
			read(x);
			read(y);
			points.push_back(point(x,y));
			group[i]=i;
		}
		
		for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		if(dist(i,j)<=r*r)
		combine(i,j);
		
	   
	    for(i=0;i<n;i++)cluster[find(i)].push_back(i);
	    
	    
	    
	    double ans1=0.0;
	    int clusters=0;
	    
	    for(i=0;i<n;i++)
	    if(j=cluster[i].size())
	    {
            clusters++;
          //cout<<"Cluster "<<clusters<<endl;
          
         
		   
		   for(k=0;k<j;k++)
           group[k]=k;
           
           for(a=0;a<j;a++)
          { 
            
			for(b=a+1;b<j;b++)
           
		  { 
		   
		   edge.push_back(eg(a,b,sqrt(dist(cluster[i][a],cluster[i][b]))));
          }
          }
           
           ans1+=kruskal();

           edge.clear();
       }
       
       
       double ans2=0;
       
       for(i=0;i<n;i++)
       {
       	
	    group[i]=i;
		if(cluster[i].size()==0)continue;
       	
       	for(j=i+1;j<n;j++)
       	{
       		if(cluster[j].size()==0)continue;
       		
       		int p1,p2,flag=0;
       		double dis=10000000.0,temp;
       		
		    for(a=0;a<cluster[i].size();a++)
       		for(b=0;b<cluster[j].size();b++)
       		{
       			temp=sqrt(dist(cluster[i][a],cluster[j][b]));
       			if(flag==0 || temp<dis){
				   									   dis=temp;
				   									   p1=cluster[i][a];
				   									   p2=cluster[j][b];
				   									   flag=1;
       			
       				
       			          }
       		}
       		edge.push_back(eg(i,j,dis));
       		
       	}
       }
       ans2=kruskal();
       printf("Case #%d: %d %0.0lf %0.0lf\n",tt++,clusters,ans1,ans2);
	   
       
       points.clear();
       edge.clear();
       for(i=0;i<n;i++)cluster[i].clear();
	   
       }
}
       
