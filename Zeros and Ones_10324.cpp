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



int zeros[1000000]={0};
		int ones[1000000]={0};
int main()
{
	
	string str;
	int i,j,k,q,tt=1;
//	freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
	
	while(getline(cin,str) && str.length())
	{
		printf("Case %d:\n",tt++);
		memset(zeros,0,sizeof(zeros));
		memset(ones,0,sizeof(zeros));
		int l=str.length();
		
		
		for(i=0;i<l;i++)
		{
			if(str[i]=='1')ones[i]++;
			else zeros[i]++;
			if(i){
				ones[i]+=ones[i-1];
				zeros[i]+=zeros[i-1];
				}
				//cout<<zeros[i]<<" ";
		}
		read(q);
		while(q--)
		{
			read(i);
			read(j);
			
			if(i>j)swap(i,j);
			
			int z,o;
			z=zeros[j];
			o=ones[j];
			if(i)
			{
				z-=zeros[i-1];
				o-=ones[i-1];
			}
			//cout<<z<<" "<<o<<" ";
			if(z!=0 && o!=0)cout<<"No\n";
			else cout<<"Yes\n";
		getchar();	
			
		}
		
		
		
	}
	
//
}

