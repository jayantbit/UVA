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

map <string,int> mp;
queue <int> q;
vector <string> v;
vector <int> ans;
set <char> st[16];
set <char> ::iterator it;


int pre[30000]={0};
int visited[30000]={0};


int main()
{
	
string s,a,b;
int k=1,i,j,pos,curr,first=1;
v.push_back("jayant");

while(getline(cin,s) && s.length())
{mp[s]=k++;
v.push_back(s);
j=s.length();
for(i=0;i<j;i++)
st[i].insert(s[i]);
}


while(cin>>a>>b)
{
	
	if(!first)cout<<endl;
	first=0;
	memset(pre,0,sizeof(pre));
	memset(visited,0,sizeof(visited));
	i=mp[a];
	pre[i]=-1;
	q.push(i);
	visited[i]=1;
	int found=0;
	while(!q.empty())
	{
		curr=q.front();q.pop();
		a=v[curr];
		if(a.compare(b)==0){found=1;break;}
		j=a.length();
		for(i=0;i<j;i++)
		{
			for(it=st[i].begin();it!=st[i].end();it++)
			{
				a[i]=(*it);
				pos=mp[a];
				if(!visited[pos])
				{
					visited[pos]=1;
					pre[pos]=curr;
					q.push(pos);
				}
			}
			a[i]=v[curr][i];
		}
		
	}
	if(found)
	{
		
		i=mp[b];
		while(i!=-1)
		{
			ans.push_back(i);
			i=pre[i];
		}
		
		for(i=ans.size()-1;i>=0;i--)
		printf("%s\n",v[ans[i]].c_str());
		
	}
	else printf("No solution.\n");
	while(!q.empty())q.pop();
	ans.clear();
}	
	
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
}

