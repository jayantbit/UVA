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

int freq[15000][26]={{0}};
char v[15000][26];
vector <string> ans;
map <int,int > mp;
map <int,int>::iterator it;





int main()
{
	
//	freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);

int i=0,j,k,l,n=0;
while(scanf("%s",v[i])!=EOF)
{
	l=strlen(v[i]);
	for(j=0;j<l;j++)
	freq[i][v[i][j]-'a']++;
	mp[i]=i;
	n++;
	i++;
}


for(i=0;i<n;i++)
{

	for(it=mp.begin();it!=mp.end();it++)
	{
		if((*it).second==i)continue;
		
	int flag=1,pos=(*it).second,p;
	
	for(p=0;p<26;p++)
	if(freq[i][p]<freq[pos][p]){flag=0;break;}
	
	if(flag){mp.erase(pos);}
    }
   
	
}
    k=0;
	for(it=mp.begin();it!=mp.end();it++,k++)
	ans.push_back(string(v[(*it).first]));
	
	sort(ans.begin(),ans.end());
	
	for(i=0;i<ans.size();i++)
	printf("%s\n",ans[i].c_str());

		
}

