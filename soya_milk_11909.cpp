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

int max(int x, int y)
{
return (x>y)*x + (y>x)*y;
}

int main()
{  int x=4,y=5;
cout<<max(x,y)<<endl;
	
	/*
	double l,w,h,t;
	cin>>l>>w>>h>>t;
	double ans1=l*h;
	double ans2=(.5)*l*l*tan(t*(22.0/7)/180.0);
	cout<<w*(ans1-ans2)<<endl;
	
	*/
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
}

