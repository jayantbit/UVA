#include<iostream>
using namespace std;
#include<stdio.h>
#include<string.h>
#include<math.h>

int dp[200][20][11];
int w[200],d,n;


int mod(int n,int m)
{

    if(n<0)

        n+=(int)(ceil(-n*1.00/m)*m);

    return n%m;

}



 
int fn(int i,int j,int k)
{
     if(k==0 && j==0 ){return 1;}
     if(i>=n || k<0)return 0;
     if(dp[i][j][k])return dp[i][j][k];
     return dp[i][j][k]=(fn(i+1,j,k)+fn(i+1,mod(j+w[i],d),k-1));
}
    
    

int main()
{

int k,q,tt=0,i,j;


while(scanf("%d%d",&n,&q)==2 && n+q)
{
printf("SET %d:\n",++tt);

for(i=0;i<n;i++)scanf("%d",&w[i]);
            
for(i=0;i<q;i++)
                       {
					   memset(dp,0,sizeof(dp));
                       printf("QUERY %d: ",i+1);
                       scanf("%d%d",&d,&k);
                       printf("%d\n",fn(0,0,k));
                       } 
}         
		  
return 0;
}
		  
		   
