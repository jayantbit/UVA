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
#define read(x) x=inp()
#define write(x) printf("%d\n",x)
#define assign(x,n) x=(int*)calloc(n,4)
#define rep(i,n) for(i=1;i<=n;++i)
#define max(a,b) ((a)>(b))?(a):(b)
#define get getchar
typedef  long long int ull;
typedef pair<int,int> pr;


vector<int>  v[10001];

int cnt[10001]={0},len,n;
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
bool visited[10001]={0};

pr q[10001];


 int bfs(int s)
{
	int i,d;
	int front=-1,rear=-1;
	
	for(i=1;i<=n;++i)visited[i]=0;
	
	q[++rear]=make_pair(s,0);
	visited[s]=1;
	int ans=0,k=0;
	
	while(front<=rear)
	{
		s=q[front+1].first;
		d=q[front+1].second;
		front++;
		
		if(cnt[s]>=2){  ans+=d;
		                k++;
		                if(k==len)break;
		            }
		
		for(i=0;i<v[s].size();++i)
		if(!visited[v[s][i]])
		{
		 visited[v[s][i]]=1;
		 q[++rear]=make_pair(v[s][i],d+1);
	    }
		
	}
	return ans;
	
}
	int  imp[10000];

int main()
{
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);

int t,s,i,j;
t=inp();
while(t--)
{
	n=inp();
	s=inp();
	
	
	for(i=1;i<=n;++i)cnt[i]=0;



	len=0;
	while(s--)
	{
	    
		i=-1;
		
	    
	    while(1)
	    {
	    	j=inp();
		  
		  if(!j)break; 
	      cnt[j]++;
	      
	      if(cnt[j]==2)imp[len++]=j;
		  
		  if(i!=-1)
	      {
	      	v[i].push_back(j);
	      	v[j].push_back(i);
	      	
	      }
		  i=j;
       }
		
		
		
	}
	
	int ans=INT_MAX,apos=-1;
	
	
	for(i=0;i<len;++i)
	{
		j=bfs(imp[i]);
		
		if(j<ans || (j==ans && imp[i]<apos))
		{
			ans=j;
			apos=imp[i];
		}
	}
	
	printf("Krochanska is in: %d\n",apos);
	
		for(i=1;i<=n;++i)
	{
	v[i].clear();
	
    }
	
	//v.clear();
	
}

}

