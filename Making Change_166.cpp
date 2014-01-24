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
#define MAX 1000

int coin[6]={5,10,20,50,100,200};
int cnt[6]={0};
int rem[MAX]={0};



int w1(int i)
{
		int k=i,j;
	    int l=0;
	    for(j=5;j>=0 && k;j--)
		{
			l+=k/coin[j];
			k%=coin[j];
			
		}
    return l;	
}

int w2(int i)
{
	int k=i;
	int l=0,p,j;
	for(j=5;j>=0 && k;j--)
		{
			p=min(k/coin[j],cnt[j]);
			l+=p;
			k-=coin[j]*p;
			
		}
    if(k==0)return l;
	else return 0;
}


int main()
{
	//2 4 2 2 1 0
	
int n,p,ans,m,sum;



double d;
	
while(cin>>cnt[0]>>cnt[1]>>cnt[2]>>cnt[3]>>cnt[4]>>cnt[5] && (cnt[0]+cnt[1]+cnt[2]+cnt[3]+cnt[4]+cnt[5]))
{


	
	
	cin>>d;
	d*=100.0;
	m=n=(int)d;
	ans=INT_MAX;
	sum=5*cnt[0]+10*cnt[1]+20*cnt[2]+50*cnt[3]+100*cnt[4]+200*cnt[5];
	
	
	
	for(;n<=sum;n++)
	if(p=w2(n))
	{ //cout<<n<<endl; 
	  ans=min(ans,p+w1(n-m));
   }
    
    printf("%3d\n",ans);
}



//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
}

