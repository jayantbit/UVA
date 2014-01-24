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


int ncr[100][100]={{0}};






int main()
{
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);

ncr[1][0]=1;
ncr[1][1]=1;

int n,r;

for(n=2;n<=10;n++)
{
	ncr[n][0]=1;
	for(r=1;r<=n;r++)
	ncr[n][r]=ncr[n-1][r-1]+ncr[n-1][r];
}


int arr[7]={8,2,9,4,5,11,12};
int len=7,i,j;

int sum=0,sign=(len&1)?1:-1;

for(i=0;i<len;i++,sign*=-1)
sum+=sign*arr[i]*ncr[len-1][i];



for(i=0;i<len;i++)
{

for(j=0;j<len-i-1;j++)
arr[j]=arr[j+1]-arr[j];

for(j=0;j<len;j++)cout<<arr[j]<< " ";
cout<<endl;

}
cout<<arr[0]<<endl;
cout<<sum<<endl;

}

