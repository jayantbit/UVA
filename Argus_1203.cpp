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
using namespace std;
typedef  pair<int,int> pr;

struct st
{
	int a,b,c;
	st(int x,int y,int z=1)
	{
    a=x;
    b=y;
    c=z;
	}
	st(){;}
	
};





class comp
{
    public:
           bool operator()(st &rhs,st &lhs){
		   					  		  		if(lhs.b*lhs.c< rhs.b*rhs.c)return true;	
											if(lhs.b*lhs.c == rhs.b*rhs.c &&  lhs.a<rhs.a)return true;
											return false;
				                           }  
      
};
 





priority_queue  <st,vector<st>,comp> v;


int main()
{
	string str;
	int i,j,n,k,l;
	st temp;
	
	while(cin>>str && str[0]!='#')
	{
	read(i);read(j);
	v.push(st(i,j));
    }
	
	read(k);
	for(i=0;i<k;i++)
	{
	  temp=v.top();v.pop();
	  write(temp.a);
	  v.push(st(temp.a,temp.b,temp.c+1));
	  	
	}
	return 0;
		
		
	
}
