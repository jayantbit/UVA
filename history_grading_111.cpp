#include<iostream>
#include<cmath>

using namespace std; 

int  a[25]={0},b[25]={0},c[25][25]={{0}};

int get(int x,int y)
    { if(x<0 || y<0)return 0;
      return c[x][y];
    }  
 
    void lcs(int x,int y)
    { 
    if(a[x]==b[y])c[x][y]=get(x-1,y-1)+1;
    else c[x][y]=max(get(x-1,y),get(x,y-1));
    }
    
    


int main()
{
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
                    cin>>j;
                    a[j-1]=i+1;
    }
    while(cin>>j)
    {
                 b[j-1]=1;
                 for(i=1;i<n;i++)
                                 {
                                 cin>>j;
                                 b[j-1]=i+1;
                                 }
                 
                 for(i=0;i<n;i++) 
                 for(j=0;j<n;j++) 
                 lcs(i,j);
 
                 cout<<c[n-1][n-1]<<endl;
    }
   
   return 0;
} 


            
                                 
    
    
                   
    
    
    
         
