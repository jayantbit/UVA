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
#define off 32000
typedef  long long int ull;

int dp[101][64002]={{0}};
vector <char> ans;
int v[101];


int check(int a,int op,int index)
{
	if(a<-32000)return 0;
	if(a>32000)return 0;
	if(dp[index][a+off])return 0;
	dp[index][a+off]=op;
}

int main()
{
//freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
int n,i,j,k,target;
read(n);
while(n--)
{
	//memset(dp,0,sizeof(dp));
	read(k);
	for(i=0;i<k;i++)
	{read(v[i]);
     for(j=-32000;j<32000;j++)dp[i][j+off]=0;
    }
	read(target);
	
	dp[0][v[0]+off]=1;
	
	for(i=1;i<k;i++)
	for(j=-32000;j<=32000;j++)
	if(dp[i-1][j+off])
	{
		check(j+v[i],1,i);
		check(j-v[i],2,i);
		check(j*v[i],3,i);
		if(v[i] && j%v[i] ==0 )check(j/v[i],4,i);
		 
	}
	if(dp[k-1][target+off]){
		
	                        j=target;
	                        char ch;
	                        for(i=k-1;i>0;i--)
	                        {
	                        	int op=dp[i][j+off];
	                        	
	                        	
	                        	if(op==1){j-=v[i];ch='+';}
	                        	else if(op==2){j+=v[i];ch='-';}
	                        	else if(op==3){j/=v[i];ch='*';}
	                        	else if(op==4){j*=v[i];ch='/';}
	                        	ans.push_back(ch);
	                        	
	                        	
	                        }
	                       
	                        for(i=0;i<k;i++)
	                        {
	                        	if(i)cout<<ans[ans.size()-1-(i-1)];
	                        	cout<<v[i];
                        	}
                        	cout<<"="<<target<<endl;
                        	ans.clear();
                        	}
    else  cout<<"NO EXPRESSION\n";
	
}

return 0;

}

