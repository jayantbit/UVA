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
int prime[17]={0};
 
//1 2 -3 -2 -1 10   
// 2 -8 -4 5 6 7 3 -1 
/*
6 -4 -8 7 -1 3 -5 -2
-4 -8 2 5 -1 -6 7 -3
6 8 5 2 -1 7 4 -3
4 7 8 5 1 -6 -3 2
-5 8 -2 6 1 -7 4 3
5 -6 -3 -8 2 -1 7 -4
-6 -7 5 -1 2 4 -3 8
5 4 -8 -3 -2 -7 -6 1
5 -2 -4 -6 3 -8 -1 7
5 -4 7 -2 -1 -6 -3 -8
-1 7 -8 3 -4 6 -5 -2
-8 2 7 5 -6 -4 1 3
-2 6 -8 -7 -1 -5 3 -4
0
*/
 
 
map < vector<int>,int> visited;
 
 
struct st
{
vector <int> v;
int run;
st(vector <int> x,int y)
{
    v=x;
        run=y;
}
st(){}
}temp;
 
 
queue <st> q;
 
string convert(vector <int> x )
{
        
        int i;
        string str="";
        for(i=0;i<8;i++)
        {if(x[i]<0)str+='-';
        str+=abs(x[i])+'0';
    }
    return str;
}
 //4*10^7
 
void dance(vector <int> v,int i,int j,int run)
{
	if(i>j)swap(i,j);
	vector <int> rem=v;
	int it,k,temp;
	
	temp=v[j];
	v.insert(v.begin()+i,temp);
	v.erase(v.begin()+j+1);
	if(!visited[v]){
					q.push(st(v,run+1));
					visited[v]=1;
					}

	v=rem;
	temp=v[j];
	v.insert(v.begin()+i+1,temp);
	v.erase(v.begin()+j+1);
	if(!visited[v]){
					q.push(st(v,run+1));
					visited[v]=1;
					}
	
    
    v=rem;
   	temp=v[i];
	v.insert(v.begin()+j,temp);
	v.erase(v.begin()+i);
		if(!visited[v]){
					q.push(st(v,run+1));
					visited[v]=1;
					}
	
    
    v=rem;
   	temp=v[i];
	v.insert(v.begin()+j+1,temp);
	v.erase(v.begin()+i);
		if(!visited[v]){
					q.push(st(v,run+1));
					visited[v]=1;
					}
	
 }
 
int bfs()
{
    
    vector <int> vect,vect2;
    int flag,i,j,k,m,tmp;
    while(!q.empty())
    {
                     temp=q.front();
                     q.pop();
                     vect=temp.v;
                    // getchar();
                     
                     flag=1;
                    // cout<<"run:"<<temp.run<<": ";
                     //cout<<vect[0]<<" ";
                                         for(i=1;i<8;i++)
                                         {
                     //cout<<vect[i]<<" ";
                     if(abs(vect[i])<abs(vect[i-1]))flag=0;
                     }
                     //cout<<endl;
                     if(flag){
                                                 return temp.run;
                                             }
                     
                     for(i=0;i<8;i++)
                     for(j=i+1;j<8;j++)
                     if(  vect[i]*vect[j] <0  && prime[abs(vect[i])+abs(vect[j])])
                     dance(vect,i,j,temp.run);
                      
                      
    }
return -1;
}
                     
                     
                     
 
 
 
 
 
 
int main()
{
   
    int i,j,k=0;
    prime[1]=prime[2]=prime[3]=prime[5]=prime[7]=prime[11]=prime[13]=1;
    string s;
    int tt=1;
        vector <int> arr(9);
    while(getline(cin,s) && s.compare("0"))
    {
    stringstream s2(s);
        for(i=0;i<8;i++)s2>>arr[i];
    visited[arr]=1;
        q.push(st(arr,0));
        printf("Case %d: %d\n",tt++,bfs());    
    while(!q.empty())q.pop();
    visited.clear();
    }
 
        return 0;
}
