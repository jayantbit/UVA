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
typedef pair <int,int> pr;


int visited[1001][1001]={{0}};
int pre[1001][1001]={{0}};
int action[1001][1001]={{0}};
queue <pr> q;
vector <int> ans;
string rem[6]={"empty A","empty B","fill A","fill B","pour B A","pour A B"};
int x,y,n;


int check(int a,int b,int ac,int prev)
{
	if(visited[a][b])return 0;
	visited[a][b]=1;
	q.push(make_pair(a,b));
	pre[a][b]=prev;
	action[a][b]=ac;
}


	
pr bfs()
{
	pr temp;
	int a,b,prev,c,d;
	while(!q.empty())
	{
		temp=q.front(); q.pop();
		a=temp.first;
		b=temp.second;
		if(a==n || b==n)return temp;
		prev=1000*a +b;
	    c=min(x,a+b);
	    d=min(y,a+b);
		
		check(0,b,1,prev);
		check(a,0,2,prev);
		check(x,b,3,prev);
		check(a,y,4,prev);
		check(c,b-(c-a),5,prev);
		check(a-(d-b),d,6,prev);
		
	}
	return make_pair(-1,-1);
	
}

int main()
{
	pr temp;
	int cx,cy,prev,i;
	
	while(cin>>x>>y>>n)
	{
		memset(visited,0,sizeof(visited));
	
		
		visited[0][0]=1;
		q.push(make_pair(0,0));
		temp=bfs();
		
		cx=temp.first;
		cy=temp.second;
		
		if(cx==-1 && cy==-1)cout<<"not reachable\n";
		else
		{
		while(cx || cy)
		{
			ans.push_back(action[cx][cy]);
			prev=pre[cx][cy];
			cx=prev/1000;
			cy=prev%1000;
		}
		
		for(i=ans.size()-1;i>=0;i--)
		cout<<rem[ans[i]-1]<<endl;
		cout<<"success"<<endl;
	    }
	
	while(!q.empty())q.pop();
	ans.clear();
	}
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
}

