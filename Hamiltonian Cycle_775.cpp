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


int v[257][257]={{0}}; 
int visited[257]={0};
int place[257]={0},n;

int hamiltonian(int pos,int pre)
{
	int i,j;
	
	if(pos==n)
	{
		
		
		if(v[place[n-1]][place[0]])
		{
		for(i=0;i<n;i++)
		{
			if(i)cout<<" ";
			cout<<place[i];
		}
		cout<<" "<<place[0]<<endl;
		return 1;
	    }
		return 0;
	}
	
	for(i=1;i<=n;i++)
	{
		if(!visited[i] && (pre==-1 || v[pre][i]))
		{
			visited[i]=1;
			place[pos]=i;
			if(hamiltonian(pos+1,i))return 1;
			visited[i]=0;
		}
	}
	return 0;
}




int main()
{
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);


int m,i,j,k;
string str;

while(cin>>n)
{
	getchar();
	memset(visited,0,sizeof(visited));
	memset(v,0,sizeof(v));
	memset(place,0,sizeof(place));
	
	while(getline(cin,str))
	{
		stringstream s2(str);
		if(s2>>i>>j)
		v[i][j]=v[j][i]=1;
		else break;
	}
	
	if(!hamiltonian(0,-1))
	cout<<"N\n";
	
}


}

