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


vector <int> v;
vector <int> lis(2002,0),lds(2002,0);


int main()
{

int t,n,i,j,k,a,b;
read(t);
while(t--)
{
	read(n);
	if(!n){
		   cout<<"0\n";
		   continue;
		   }
	for(i=0;i<n;i++)
	{
		read(j);
		v.push_back(j);
	}
	

	lis[n-1]=lds[n-1]=1;
	int ans=1;
	for(i=n-2;i>=0;i--)
	{
		a=b=0;
		for(j=i+1;j<n;j++)
		{
		 				if(v[i]>v[j] && lis[j]>a)a=lis[j];
		 				if(v[i]<v[j] && lds[j]>b)b=lds[j];
		}
		lis[i]=a+1;
		lds[i]=b+1;
		ans=max(ans,lis[i]+lds[i]-1);
	}
	
	/*
	for(i=0;i<n;i++)cout<<v[i]<<" ";
	cout<<endl;
	for(i=0;i<n;i++)cout<<lis[i]<<" ";
	cout<<endl;
	for(i=0;i<n;i++)cout<<lds[i]<<" ";
	cout<<endl;
	*/
	write(ans);
	v.clear();
}
	
	
	return 0;	
	
}


