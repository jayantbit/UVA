#include<iostream>
#include<cstdio>
using namespace std;
int ar[101][101]={{0}};

int val(int n,int m,int i,int j)
{if(i<0 || i>n-1)return 0;
if(j<0 || j>m-1)return 0;
else return ar[i][j];
}
int main()
{
    int n,m,i,j,k=0;
    char ch;
    while(cin>>n>>m && (n+m))
    {
    getchar();
    if(k)cout<<endl;
    cout<<"Field #"<<++k<<":"<<endl;
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    {cin>>ch;
    if(ch=='*')ar[i][j]=1;
    else ar[i][j]=0;
    }
    
    
    for(i=0;i<n;i++,cout<<endl)
    for(j=0;j<m;j++)
    {if(ar[i][j]==1)cout<<"*";
      else cout<<(val(n,m,i,j+1)+ val(n,m,i,j-1)+ val(n,m,i+1,j)+ val(n,m,i-1,j)+
       val(n,m,i+1,j+1)+ val(n,m,i+1,j-1)+ val(n,m,i-1,j+1) + val(n,m,i-1,j-1));
    }    
      
    
    }
    
    return 0;
}
