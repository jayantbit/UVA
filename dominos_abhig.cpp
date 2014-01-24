#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int min(int ,int);
int dfs1(int);
int dfs(int);

int visited[100],s1,s2,a,ans;

vector <vector <int> > cost(100);



int main()
{
    
int b,c,i,u,j,v,z,x;
cin>>z;

for(x=0;x<z;x++)
{
cin>>a;
cin>>b;

s1=0;
s2=0;

for(i=0;i<b;i++)
{
cin>>u;
cin>>v;
cost[u-1].push_back(v-1);
}

for(i=0;i<a;i++)
{
if(visited[i]!=1)
{
visited[i]=1;                             
dfs(i);
s1++;    
}
}

for(i=0;i<a;i++)
visited[i]=0;
 
for(i=a-1;i>=0;i--)
{
if(visited[i]!=1)
{  
                              
visited[i]=1;                                 
dfs1(i);
s2++;
}
}

ans=min(s1,s2);

cout<<ans;
}
return 0;    
}

int dfs(int i)
{
int j,k=cost[i].size();
int it;

for(it=0;it<k; it++)
{
if(visited[it]!=1)
{
                                      
visited[it]=1;
dfs(it);                 
}
    
}

return 0;
}
    
int dfs1(int i)
{
int j,k=cost[i].size();
int it;

for(it=0;it<k; it++)
{
if(visited[it]!=1)
{
                                      
visited[it]=1;
dfs1(it);                 
}
    
}

return 0;
}

int min(int a,int b)
{
if(a<b)
return a;
else
return b;    
}


/*
9 11
0 6
6 3
3 1
6 8
8 5 
5 2
2 8
5 7
7 1
1 4
4 7

*/    

