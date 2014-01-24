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


ull fact[21]={1,0};

int main()
{
	string s;
	ull n,i,j,k,t,pos;
	for(n=1;n<=20;n++)fact[n]=n*fact[n-1];
	cin>>t;
	while(t-- && cin>>s>>n)
	{
		string ss=s;
		sort(s.begin(),s.end());
		
		
		k=s.length()-1;
		
		j=fact[k];
		for(i=0;i<=k;i++)
		{
			pos=s.find(ss[i]);
			n+=pos*j;
			if(k)j/=k;
			k--;
			s.erase(s.begin()+pos);
		}
		
		s=ss;

		sort(s.begin(),s.end());
		cout<<s<<endl-
		+
		
		
		
		
		
		
		n%=j;
		
		while(k>=0)
		{
			i=n/j;
			n%=j;
			if(k)j/=k;
			k--;
			cout<<s[i];
			s.erase(s.begin()+i);
		}
		cout<<endl;
		
	}
	
	return 0;
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
}

