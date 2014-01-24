#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<algorithm>
#define mx 105
typedef   long double ull;
using namespace std;


vector <ull> fib;
ull it;

ull bsearch(ull key)
 {
     int l=0,h=104,m;
     do
     {
         m=(h+l)/2;
         //if(fib[m]-key<1e-7)return m;
         if(fib[m]>key)h=m;
         else l=m;
     }while(l<h);
     return h;
 }

int main()
{
 ull a=1,b=2,c,n=2,sum=0;
 fib.push_back(a);
 fib.push_back(b);
 string s1,s2;
 ull val;
 int i,j,k,t=0;
 do
 {
                  c=a+b;
                  a=b;
                  b=c;
                  n++;
                  fib.push_back(c);
 }while(n<mx);
 
 
 
 
 
 while(cin>>s1>>s2)
 {                if(t)printf("\n");
           i=s1.length()-1,j=0;
           
           val=0;
           for(;i>=0;i--,j++)if(s1[i]=='1')val+=fib[j];
           
           i=s2.length()-1,j=0;
           
           for(;i>=0;i--,j++)if(s2[i]=='1')val+=fib[j];   
           vector <int> ans(mx+1);
           
           
           while(val>0)
           {
                     it=bsearch(val);
                     
                     val-=fib[it];
                    
                     ans[it]=1;
                     //getchar();
                     //cout<<val<<endl;
           }
           for(i=mx;i>=0;i--)if(ans[i])break;
           
           for(;i>=0;i--)printf("%d",ans[i]);
           printf("\n");
           ++t;
 }
                           
                   
 
 
 
 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);getchar();
return 0;
}
