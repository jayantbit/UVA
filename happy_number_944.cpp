#include<cstdio>
#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
 
int visited[500]={0};
int ans[500]={0};
 
int sqsum(int n)
{
    int sum=0,k;
    while(n)
    {
            k=n%10;
            sum+=k*k;
            n/=10;
    }
    return sum;
}
    
 
 
 
int fn(int n)
{
    
    if(visited[n])return -1;
    visited[n]=1;
    if(n==1)return 1;
    if(ans[n])return ans[n];
    int d=sqsum(n);
    int temp=fn(d);
    if(temp==-1)ans[n]=-1;
    else ans[n]=1+temp;
    return ans[n];
}
 
 
int main()
{
    
    int n,temp,l,h,k,f;
    
    ans[1]=1;
    for(n=1;n<=100000;n++)
    {	
     memset(visited,0,sizeof(visited));
     fn(sqsum(n));
    }
    
	f=0;
    while(cin>>l>>h)
    {
     if(f)cout<<endl;
	 for(k=l;k<=h;k++)
     {
                      temp=ans[sqsum(k)];
                      if(temp!=-1)cout<<k<<" "<<temp+1*(k!=1)<<endl;
     }
    
    f=1;
	}
     return 0;     
}
    
    
