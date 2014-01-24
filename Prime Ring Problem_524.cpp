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
typedef  long long int ull;
using namespace std;
typedef  pair<int,int> pr;

#define N 64
        unsigned int prime[N / 64];
        #define gP(n) (n==2||(n&1)&& prime[n>>6]&(1<<((n>>1)&31)))
        #define rP(n) (prime[n>>6]&=~(1<<((n>>1)&31)))
        void sieve()
        {
        memset( prime, -1, sizeof( prime ) );

        unsigned int i;
         unsigned int sqrtN = ( unsigned int )sqrt( ( double )N ) + 1;
          for( i = 3; i < sqrtN; i += 2 ) if( gP( i ) )
          {
          unsigned int i2 = i + i;
          for( unsigned int j = i * i; j < N; j += i2 ) rP( j );
          }
        }


int *visited;
int place[17]={0},lim;

void fn(int p)
{
   
    int i;
    if(p==lim)
    {
     if(gP(place[0]+place[lim-1])){
                                       for(i=0;i<lim;i++){
                                                          if(i)printf(" ");
                                                          printf("%d",place[i]);
                                                         }
                                        printf("\n");
                                        
                                        }
          return;
     }                              
                                       
                                                         
     for(i=2;i<=lim;i++)
    if(!visited[i] && gP(place[p-1]+i)){
                                             visited[i]=1;
                                             place[p]=i;
                                             fn(p+1);
                                             visited[i]=0;
                                             }
                                             
}                                              
                                             
    

int main()
{
 int t=0;
 sieve();
 while(cin>>lim)
 {
 if(t)printf("\n");
 printf("Case %d:\n",++t);
 assign(visited,lim+1);
 place[0]=1;
 fn(1);
 }
 
 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
//system("pause");
return 0;
}
