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
typedef  long long int ull;
using namespace std;
typedef  pair<int,int> pr;

/*
5 6
0 1
0 2
3 2
2 4
4 3
1 2
*/


int *visited,*ans;
queue <pr> q;

int bfs(vector < vector<int> > v)
{
    int a,b,i,j,s;
    pr temp;
    vector <int> v2;
    while(!q.empty())
    {
                     temp=q.front();
                     q.pop();
                     s=temp.second;
                     ans[temp.first]=s;
                     v2=v[temp.first];
                     for(i=0;i<v2.size();i++)
                     if(!visited[v2[i]]){q.push(make_pair(v2[i],s+1)); visited[v2[i]]=1;}
    }
    return -1;
}     

int find(vector <int> vect,int d)
{
    int i=0,j=vect.size();
    for(i=0;i<j;i++)
    if(vect[i]==d)return 1;
    
    return 0;
}

int main()
{
 
int p,d,i,j,k,a,b,t;

read(t);

while(t--)
{
                read(p);read(d);
                vector < vector<int> > v(p);
                
                for(i=0;i<d;i++)
                {
                                 read(a);read(b);
                                if(a>b)swap(a,b);
                                if(!find(v[a],b))
                                {v[a].push_back(b);v[b].push_back(a);}
                }
                assign(visited,p);
                assign(ans,p);
                q.push(make_pair(0,0));
                visited[0]=1;
                bfs(v);
                for(i=1;i<p;i++)write(ans[i]);
                
                if(t)cout<<endl;
                
                
                

}
return 0;
}
