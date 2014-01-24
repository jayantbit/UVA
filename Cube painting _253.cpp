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


string target;

queue <string> q;
map<string,bool> visited;

string flipx(string s)
{
	
	char temp=s[3-1];
	s[3-1]=s[2-1];
	s[2-1]=s[4-1];
	s[4-1]=s[5-1];
	s[5-1]=temp;
	return s;
}

string flipy(string s)
{
	
	char temp=s[5-1];
	s[5-1]=s[1-1];
	s[1-1]=s[2-1];
	s[2-1]=s[6-1];
	s[6-1]=temp;
	return s;
}






int bfs()
{
	
	string xx,a,b;
	while(!q.empty())
	{
	  xx=q.front();
	  q.pop();
	  visited[xx]=true;
	  if(xx.compare(target)==0)return 1;
	  a=flipx(xx);
	  b=flipy(xx);
	  if(!visited[a])q.push(a);
	  if(!visited[b])q.push(b);	
	}
	return 0;
}





int main()
{


string str,s;



while(cin>>str)
{
	s=str.substr(0,6);
	target=str.substr(6);
q.push(s);
if(bfs())cout<<"TRUE\n";
else cout<<"FALSE\n";
visited.clear();
while(!q.empty())q.pop();
}

return 0;
}






