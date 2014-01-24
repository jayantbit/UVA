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
#define read(x) x=inp()
#define write(x) printf("%d\n",x)
#define assign(x,n) x=(int*)calloc(n,4)
#define zero(x) memset(x,0,sizeof(x))
#define rep(i,n) for(i=1;i<=n;++i)
#define max(a,b) ((a)>(b))?(a):(b)
#define get getchar
typedef  long long int ull;

int group[10000]={0};


int a,m;

inline int inp()
{
    int n=0,s=1;
    char p=get();
    if(p=='-')
        s=-1;
    while((p<'0'||p>'9')&&p!=EOF&&p!='-')
        p=get();
    if(p=='-')
        s=-1,p=get();
    while(p>='0'&&p<='9')
    {
        n = (n<< 3) + (n<< 1) + (p - '0');
        p=get();
    };
    return n*s;
}


struct eg
{
  int u,v;
  int w;
  eg(){;}
  eg(int a,int b,int dd)
  {
    u=a;
    v=b;
    w=dd;
  }
};



bool comp( eg  x,eg y)
{
  return x.w<y.w;
}






 inline int find(int i) 
{
if(group[i]==i)return i;
return find(group[i]);  
}


 inline int combine(int i,int j)
{
  if(i>j)swap(i,j);
  i=find(i);
  j=find(j);
  if(i==j)return 0;
  group[i]=j;
  return 1;
}


 


int main()
{
	int t,n,j,k,w,i,tt=1;
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	
	read(t);
	ull ans;
	while(t--)
	{
		read(n);read(m);read(a);
		
		vector <eg> edge;
		
		ans=0;
		for(i=0;i<m;i++)
		{
			read(j);read(k);read(w);
			j--;k--;
			if(w<a)edge.push_back(eg(j,k,w));
		
		}
	
		sort(edge.begin(),edge.end(),comp);
		
		m=edge.size();
		
		int ans2=0,temp;
		
		
		for(i=0;i<n;i++){group[i]=i;}
		
       
	    
		
		for(i=0;i<m;i++)
      {
                                
								
								if(combine(edge[i].u,edge[i].v))
                                ans+=edge[i].w;
							      
							    
                                
      }
      //printf("done\n");
      
        
        
        
        for(i=0;i<n;i++)
        if(group[i]==i)
        {
        	ans2++;
        	ans+=a;
        }
		
        printf("Case #%d: %lld %d\n",tt++,ans,ans2);	
		 
		
	}
	
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
}

