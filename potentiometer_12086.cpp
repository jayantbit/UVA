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
#define rep(i,n) for(i=1;i<=n;++i)
#define max(a,b) ((a)>(b))?(a):(b)
typedef  long long int ull;
#define get getchar

int mx;
int tree[200010]={0};
int pot[200010]={0};

int getval(int idx)
{
	int sum = 0;
	while (idx > 0)
	{
		sum += tree[idx];
		idx -= (idx & -idx);
	}
	return sum;
}


void update(int idx ,int val)
{
	while (idx <= mx)
	{
		tree[idx] += val;
		idx += (idx & -idx);
	}
}


//1 2 3 4  5
//1 3 3 10 5

//idx is responsible for indexes from (idx - 2^r + 1) to idx


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

int main()
{
	
	
	
	int t,n,i,j,x,y,tt=1;
	string s;
	char ch;
//	freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
	
	
	while(cin>>n && n)
	{
		if(tt>1)printf("\n");
		printf("Case %d:\n",tt++);
		
		mx=n;
		memset(tree,0,sizeof(tree));
		memset(pot,0,sizeof(tree));
		
		for(i=1;i<=n;i++)
		{
			read(pot[i]);
			update(i,pot[i]);
		}
	//	getchar();
		
		while(getline(cin,s) && s.compare("END"))
		{
			
			stringstream s2(s);
			
			s2>>ch>>x>>y;
			if(ch=='M')
			{
				n=getval(y);
				if(x>1)n-=getval(x-1);
				write(n);
			}
			else {  
				 update(x,y-pot[x]);
				 pot[x]=y;
				 }
		}
		
	}
	return 0;
	
//
}

