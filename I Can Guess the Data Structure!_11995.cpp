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
#include<stack>
#include<sstream>
#define read(x) scanf("%d",&x)
#define write(x) printf("%d\n",x)
#define assign(x,n) x=(int*)calloc(n,4)
typedef  long long int ull;
using namespace std;


stack <int> s;
queue <int> q;
priority_queue <int> pr;


int main()
{
 
 int n,i,a,b;
 while(read(n)!=EOF)
 {
              
              stack <int> s;
              queue <int> q;
              priority_queue <int> pr;
              int sa=1,qa=1,pra=1;
              for(i=0;i<n;i++)
              {
                              read(a);read(b);
                              if(a==1){
                                       if(sa)s.push(b);
                                       if(qa)q.push(b);
                                       if(pra)pr.push(b);
                                       }
                              else {
                                   if(sa ){if(s.empty() || s.top()!=b)sa=0;else s.pop();}
                                   if(qa ){if(q.empty() ||q.front()!=b)qa=0;else q.pop();}         
                                   if(pra ){if(pr.empty() ||pr.top()!=b)pra=0;else pr.pop();}
                                   }
              }
              
              if(sa+qa+pra == 0)cout<<"impossible\n";
              else if(sa+qa+pra > 1)cout<<"not sure\n";
              else if(sa)cout<<"stack\n";
              else if(qa)cout<<"queue\n";
              else if(pra)cout<<"priority queue\n";
              
}            
 
 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
//system("pause");
return 0;
}
