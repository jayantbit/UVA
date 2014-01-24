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
#include<stack>
#include<queue>
#include<sstream>
#define read(x) scanf("%d",&x)
#define write(x) printf("%d\n",x)
#define assign(x,n) x=(int*)calloc(n,4)
#define rep(i,n) for(i=1;i<=n;++i)
#define max(a,b) ((a)>(b))?(a):(b)
typedef  long long int ull;

int main()
{
	
int st;
cin>>st;
while(st--)
{
	
	int n,q,i,j,flag,ss;
	cin>>n>>ss>>q;
	int k=0;
	
	queue <int> Q[n];
	stack <int> s;
	for(i=0;i<n;i++)
	{
	 cin>>j;
	 while(j--){cin>>k;
	            Q[i].push(k-1);
	 	       }
	}
	
	k=0;
	flag=1;
	for(i=0;flag;i=(i+1)%n)
	{
	  
	 while(!s.empty())
      {
	 	                if(s.top()==i){
	 	                			   k++;
	 	                			   s.pop();
	                  			      }
	                    else if(Q[i].size()==q)break;
						else {
							 Q[i].push(s.top());
							 k++;
						     s.pop();
							 }  			     
					  
	 }
	
	
	while(!Q[i].empty() && s.size()<ss)
	{
		s.push(Q[i].front());
		Q[i].pop();
	    k++;	
	  
	}
	flag=0;
	if(!s.empty())flag=1;
	if(flag==0)
	            {
	            	for(j=0;j<n;j++)if(!Q[j].empty()){flag=1;break;}
	            }
	if(flag)k+=2;
	}
	cout<<k<<endl;
	
}	
return 0;
}

