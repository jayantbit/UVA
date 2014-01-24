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


using namespace std;

int memo[1000];

vector<int> v[1000];

int count(int d){
    if(d==0) return 1;
    if(memo[d]!=-1) return memo[d];
    
    memo[d]=0;
    int i;
    
    for( i=0;i<v[d].size();i++)
	 memo[d]+=count(v[d][i]);
    
    return memo[d];
}

int main(){
   // freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    
    int n,m,x,ans,i,j;
    bool line=false;
    
    while(scanf("%d",&n)==1){
        ans=0;
        
        fill(memo,memo+n,-1);
       
        
        for( i=0;i<n;i++){
            scanf("%d",&m);
            if(m==0) {ans+=count(i);}
            
            for( j=0;j<m;j++){
                scanf("%d",&x);
                v[x].push_back(i);
            }
        }
        
        for(i=0;i<n;i++)v[i].clear();
        
        if(line) printf("\n");
        else line=true;
        
        printf("%d\n",ans);
    }
    
    return 0;
}
